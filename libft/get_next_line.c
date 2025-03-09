/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 07:48:44 by zlee              #+#    #+#             */
/*   Updated: 2024/12/08 13:44:13 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_spt_result(char *result)
{
	int		result_s;
	int		index;
	char	*temp_result;

	index = -1;
	result_s = 0;
	while (result[result_s] != '\n')
		result_s++;
	temp_result = ft_calloc(result_s + 2, sizeof(char));
	if (!temp_result)
		return (NULL);
	while (++index < result_s + 1)
		temp_result[index] = result[index];
	free(result);
	result = temp_result;
	return (result);
}

static void	read_buffer(int fd, char **result)
{
	char	*temp_buffer;
	int		size;
	char	*temp;

	temp = NULL;
	temp_buffer = malloc(((BUFFER_SIZE + 1) * sizeof(char)));
	if (!temp_buffer)
		return ;
	size = read(fd, temp_buffer, BUFFER_SIZE);
	while (size > 0)
	{
		temp_buffer[size] = 0;
		temp = ft_strjoin(*result, temp_buffer);
		free(*result);
		*result = temp;
		if (ft_strchr(*result, '\n'))
			break ;
		size = read(fd, temp_buffer, BUFFER_SIZE);
	}
	free(temp_buffer);
}

static char	*ft_mk_buffer(char *buffer, char *result)
{
	int	result_s;
	int	buf_len;
	int	i;

	i = -1;
	buf_len = 0;
	result_s = 0;
	while (result[result_s] != '\n')
		result_s++;
	buf_len = ft_strlen(result) - result_s + 1;
	buffer = malloc((buf_len + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (++i < buf_len - 1)
		buffer[i] = result[result_s + i + 1];
	buffer[i] = '\0';
	return (buffer);
}

static char	*ft_buf_prep(char **result, char **buffer)
{
	char	*temp;

	if (*result == NULL)
		return (*buffer);
	temp = ft_strjoin(*buffer, *result);
	if (!temp)
		return (*result);
	free(*buffer);
	free(*result);
	*result = temp;
	*buffer = 0;
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*buffer[FD_SETSIZE];
	char		*result;
	char		*temp;

	result = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	result = ft_calloc(1, 1);
	if (!result)
		return (NULL);
	read_buffer(fd, &result);
	if (buffer[fd] != NULL)
		result = ft_buf_prep(&result, &buffer[fd]);
	if (!result || *result == 0)
	{
		free(result);
		return (NULL);
	}
	if (ft_strchr(result, '\n'))
	{
		buffer[fd] = ft_mk_buffer(buffer[fd], result);
		temp = ft_spt_result(result);
		result = temp;
	}
	return (result);
}
