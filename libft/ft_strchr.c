/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:58:57 by zlee              #+#    #+#             */
/*   Updated: 2024/11/14 15:47:24 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
//#include <stdio.h>
//int	main(void)
//{
	//char string[] = "Hello World.";
	//printf("%c\n", *(char *)ft_strchr(string, 'g'));
	//printf("%s\n", (char *)ft_strchr(string, 'a'));
	//printf("%s\n", (char *)ft_strchr(string, 'l'));
//
//}
