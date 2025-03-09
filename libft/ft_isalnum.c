/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:35:48 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:53:51 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int num = '0';
	int num2 = 'e';
	int num3 = 'D';
	int num4 = ' ';
	int num5 = '\t';

	printf("%d\n", ft_isalnum(num)); // 1
	printf("%d\n", ft_isalnum(num2)); // 1
	printf("%d\n", ft_isalnum(num3)); // 1
	printf("%d\n", ft_isalnum(num4)); // 0
	printf("%d\n", ft_isalnum(num5)); // 0
}
*/
