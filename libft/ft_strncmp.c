/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:18:48 by zlee              #+#    #+#             */
/*   Updated: 2024/11/07 16:26:50 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && c < n)
	{
		if (((unsigned char)s1[c] - (unsigned char)s2[c]) != 0)
			return ((int)((unsigned char)s1[c] - (unsigned char)s2[c]));
		c++;
	}
	if (c != n)
		return ((int)((unsigned char)s1[c] - (unsigned char)s2[c]));
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
	//char string[] = "Hello\0";
	//char string2[] = "Hello\200";
	//printf("%d\n", strncmp(string, string2, 1));
	//printf("%d\n", strncmp(string, string2, 20));
//}
