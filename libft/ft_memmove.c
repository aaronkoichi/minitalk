/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:52:03 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 13:41:27 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*initial_d;
	unsigned char	*initial_s;

	count = 0;
	initial_d = (unsigned char *)dest;
	initial_s = (unsigned char *)src;
	if (src < dest)
	{
		while (count < n)
		{
			initial_d[n - count - 1] = initial_s[n - count - 1];
			count++;
		}
	}
	else if (src > dest)
	{
		while (count < n)
		{
			initial_d[count] = initial_s[count];
			count++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hello Wurld!";
	printf("%s\n", string);
	ft_memmove(string + 3, string, 5);
	printf("%s\n", string);
}
*/
