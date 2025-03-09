/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:59:40 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 14:31:15 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_ws(const char *nptr)
{
	int	index;

	index = 0;
	while (nptr[index] == 32 || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	return (index);
}

int	ft_atoi(const char *nptr)
{
	int	multiple;
	int	index;
	int	total;

	multiple = 1;
	total = 0;
	index = count_ws(nptr);
	if (nptr[index] == '-' || nptr[index] == '+')
		if (nptr[index++] == '-')
			multiple = -1;
	while (nptr[index] >= '0' && nptr[index] <= '9')
		total = (total * 10) + (nptr[index++] - 48);
	return (total * multiple);
}
//#include <stdio.h>
//int	main(void)
//{
	//char num1[] = "		34";
	//char num2[] = "-292382";
	//char num3[] = "		+-2982";
	//char num4[] = "		+230";
//
	//printf("%d\n", ft_atoi(num1)); // 34
	//printf("%d\n", ft_atoi(num2)); // -292392
	//printf("%d\n", ft_atoi(num3)); // 0
	//printf("%d\n", ft_atoi(num4)); // 230
	//printf("%d\n", ft_atoi("-2147483648")); // min integer
	//printf("%d\n", ft_atoi("2147483647")); // max integer
//}
