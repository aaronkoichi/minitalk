/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:43:41 by zlee              #+#    #+#             */
/*   Updated: 2024/11/07 16:36:46 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
	//int num1 = 'n';
	//int num2 = '%';
	//int num3 = ')';
	//int num4 = 299;
	//int num5 = -34;
	//
	//printf("%d\n", ft_isascii(num1)); // 1
	//printf("%d\n", ft_isascii(num2)); // 1
	//printf("%d\n", ft_isascii(num3)); // 1
	//printf("%d\n", ft_isascii(137)); // 0
	//printf("%d\n", ft_isascii(num5)); // 0
	//
//}
