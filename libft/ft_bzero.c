/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:28:04 by zlee              #+#    #+#             */
/*   Updated: 2024/11/14 12:18:27 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*initial;
	size_t			count;

	count = 0;
	initial = s;
	while (count < n)
	{
		*initial = '\0';
		initial++;
		count++;
	}
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char string[] = "Hello World";
	ft_bzero(string, 3);
	printf("%s\n", string);
	printf("%s\n", &string[1]);
	printf("%s\n", &string[2]);
	printf("%s\n", &string[3]);
	printf("%s\n", &string[4]);
}
*/
