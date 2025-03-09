/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:15:58 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 13:34:42 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const c, char const *set)
{
	int	count;

	count = 0;
	while (set[count] != '\0')
	{
		if (set[count] == c)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	size_t	start;
	size_t	end;
	char	*string;

	c = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (is_set(s1[start], set))
		start++;
	while (is_set(s1[end - 1], set) && end != 0)
		end--;
	if (start > end)
		start = 0;
	string = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (start < end)
		string[c++] = s1[start++];
	string[c] = '\0';
	return (string);
}
//#include <stdio.h>
//int	main(void)
//{
	//char	*string = "food is greatggggggg";
	//char	*set = "g";
	//char	*trimmed = ft_strtrim(string, set);
	//printf("%s\n", trimmed);
	//free(trimmed);
//}
