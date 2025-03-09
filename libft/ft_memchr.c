/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:24:34 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 14:30:33 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*initial;
	size_t			count;

	count = 0;
	initial = (unsigned char *)s;
	while (count < n)
	{
		if (initial[count] == (unsigned char)c)
			return ((void *)&initial[count]);
		count++;
		s++;
	}
	return (NULL);
}
//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
	//char string[] = "Hello World.";
	//int	intarr[5] = {-49,2,-3,4,5};
	//printf("%c\n", *(char *)ft_memchr(string, 'l', sizeof(string)));
	//printf("%s\n", (char *)ft_memchr(string, 'a', sizeof(string)));
	//printf("%s\n", (char *)ft_memchr(string, 'l', sizeof(string)));
	//printf("%d\n", *(char *)ft_memchr(intarr, -3, sizeof(intarr)));
//}
