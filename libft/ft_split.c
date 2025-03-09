/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:58:40 by zlee              #+#    #+#             */
/*   Updated: 2025/01/14 15:24:31 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_arr(char const *s, char c)
{
	int	in_words;
	int	size;

	in_words = 0;
	size = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s != c && !in_words)
		{
			in_words = 1;
			size++;
		}
		if (*s == c && in_words)
			in_words = 0;
		s++;
	}
	return (size);
}

static char	*append_arr(char const *s, char c, int *index)
{
	int		size;
	char	*arr;

	size = 0;
	while (s[*index + size] != c && s[*index + size])
		size++;
	arr = ft_substr(&(s[*index]), 0, size);
	(*index) += size;
	return (arr);
}

void	free_arr(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(arr[i++]);
	free(arr);
}

static char	**iter_arr(char const *s, char c, int size, char **arr)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (count < size)
	{
		while (s[index] == c)
			index++;
		arr[count] = append_arr(s, c, &index);
		if (!arr[count])
		{
			free_arr(arr, count);
			return (NULL);
		}
		count++;
	}
	arr[size] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		size;

	if (!s)
		return (NULL);
	size = calc_arr(s, c);
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	iter_arr(s, c, size, arr);
	return (arr);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int index = 0;
// 	char *string = "lorem ipsum dolor  euismod non, mi.";
// 	char **sep = ft_split(string, 'z');
// 	while (sep[index] != NULL)
// 	{
// 		write(1, sep[index], ft_strlen(sep[index]));
// 		write (1, "\n", 1);
// 		index++;
// 	}
// 	free_arr(sep, index);
// }
