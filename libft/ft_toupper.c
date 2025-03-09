/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:51:43 by zlee              #+#    #+#             */
/*   Updated: 2024/11/07 08:06:01 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char test = 'Z';
	char test2 = 'a';
	char test3 = '5';
	printf("%c\n", ft_toupper(test));
	printf("%c\n", ft_toupper(test2));
	printf("%c\n", ft_toupper(test3));
}
*/
