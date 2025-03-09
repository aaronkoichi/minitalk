/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:57:08 by zlee              #+#    #+#             */
/*   Updated: 2024/11/07 08:06:07 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char test1 = 's';
	char test2 = '#';
	char test3 = 'B';

	printf("%c\n", ft_tolower(test1));
	printf("%c\n", ft_tolower(test2));
	printf("%c\n", ft_tolower(test3));
}
*/
