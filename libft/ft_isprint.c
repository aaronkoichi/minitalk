/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:45:43 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:54:39 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int num = '3';
	int num2 = 'v';
	int num3 = '\t';
	int num4 = '\v';
	int num5 = '\n';
	int num6 = ' ';

	printf("%d\n", ft_isprint(num)); // 1
	printf("%d\n", ft_isprint(num2)); // 1
	printf("%d\n", ft_isprint(num3)); // 0
	printf("%d\n", ft_isprint(num4)); // 0
	printf("%d\n", ft_isprint(num5)); // 0
	printf("%d\n", ft_isprint(num6)); // 1 
}
*/
