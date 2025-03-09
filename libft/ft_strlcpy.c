/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:46:20 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:49:35 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[c] != '\0' && c + 1 < size)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (ft_strlen(src));
}
//#include <bsd/string.h>
//#include <stdio.h>
//int	main(void)
//{
	//char	string[] = "I love bananas.";
	//char	empty[] = "lmao i think this is cool";
	//printf("%lu\n", ft_strlcpy(empty, string, 4));
	//printf("%s\n", empty);
//}
