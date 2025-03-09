/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:36:33 by zlee              #+#    #+#             */
/*   Updated: 2024/11/14 10:21:52 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	total_d;

	count = 0;
	total_d = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[total_d] != '\0' && total_d < size)
		total_d++;
	if (total_d != ft_strlen(dst))
		return (total_d + ft_strlen(src));
	while (total_d + count + 1 < size && src[count] != '\0')
	{
		dst[total_d + count] = src[count];
		count++;
	}
	dst[total_d + count] = '\0';
	return (total_d + ft_strlen(src));
}
//#include <stdio.h>
//#include <bsd/string.h>
//int main(void)
//{
	//char 	string[] = "Hello world! ";
	//char	string2[] = "Crazy stuff la";
	//printf("%lu\n", ft_strlcat(string, string2, 20));
	//printf("%s\n", string);
	//return (0);
//}
