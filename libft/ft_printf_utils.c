/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:31:04 by zlee              #+#    #+#             */
/*   Updated: 2024/12/02 14:54:17 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlong(unsigned long num)
{
	int	count;

	count = 0;
	if (num > 9)
		count += ft_putlong(num / 10);
	ft_putchar_fd((num % 10) + 48, 1);
	return (count + 1);
}

int	count_digit(int n)
{
	int	count;

	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_put_base_low_long(unsigned long num, char cap)
{
	int		count;

	count = 0;
	if (num > 15)
		count += ft_put_base_low_long(num / 16, cap);
	if (cap == 'x')
	{
		ft_putchar_fd("0123456789abcdef"[num % 16], 1);
		return (count + 1);
	}
	else
	{
		ft_putchar_fd("0123456789ABCDEF"[num % 16], 1);
		return (count + 1);
	}
}
