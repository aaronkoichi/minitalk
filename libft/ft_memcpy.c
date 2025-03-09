/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:32:42 by zlee              #+#    #+#             */
/*   Updated: 2024/11/15 11:08:14 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*initial_d;
	unsigned char	*initial_s;
	size_t			count;

	count = 0;
	initial_d = (unsigned char *)dest;
	initial_s = (unsigned char *)src;
	while (count < n)
	{
		initial_d[count] = initial_s[count];
		count++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "Start stop";
//
// 	printf("%s\n", str);
//
// 	memcpy((void *)0 , (void*)0, 3 * sizeof(char));
//
//}
