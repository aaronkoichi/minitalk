/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:17:00 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:52:08 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char a = '4';
	char b = 'e';
	char c = 'B';
	char d = ' ';
	printf("%d\n", ft_isalpha(a)); // Answer is 0
	printf("%d\n", ft_isalpha(b)); // 1
	printf("%d\n", ft_isalpha(c)); // 1
	printf("%d\n", ft_isalpha(d)); // 0
}
*/
