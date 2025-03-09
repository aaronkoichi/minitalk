/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:43:20 by zlee              #+#    #+#             */
/*   Updated: 2024/12/03 20:30:39 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_put_base_low(unsigned int num, char cap)
{
	int		count;

	count = 0;
	if (num > 15)
		count += ft_put_base_low(num / 16, cap);
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

int	ft_putvoid(void *ptr)
{
	int	index;

	index = 0;
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	index = ft_put_base_low_long(*(unsigned long *)&ptr, 'x');
	return (index + 2);
}

int	ft_process_symbol_two(va_list list_params, char sym)
{
	int		temp;
	int		count;

	count = 0;
	temp = 0;
	if (sym == 'p')
	{
		count = ft_putvoid(va_arg(list_params, void *));
		return (count);
	}
	else if (sym == 'd' || sym == 'i')
	{
		temp = va_arg(list_params, int);
		ft_putnbr_fd(temp, 1);
		count = count_digit(temp);
	}
	else if (sym == 'u')
		count = ft_putlong(va_arg(list_params, unsigned int));
	else if (sym == 'x' || sym == 'X')
		count = ft_put_base_low(va_arg(list_params, unsigned long), sym);
	else if (sym == '%')
		ft_putchar_fd('%', ++count);
	return (count);
}

int	ft_process_symbol_one(va_list list_params, char sym)
{
	char	*temp;

	temp = NULL;
	if (sym == 'c')
	{
		ft_putchar_fd(va_arg(list_params, int), 1);
		return (1);
	}
	else if (sym == 's')
	{
		temp = va_arg(list_params, char *);
		if (temp == NULL)
			temp = "(null)";
		ft_putstr_fd(temp, 1);
		return (ft_strlen(temp));
	}
	else
		return (ft_process_symbol_two(list_params, sym));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	list_params;
	int		i;
	int		total;

	va_start(list_params, s);
	i = 0;
	total = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && (s[i + 1] == 'c' || s[i + 1] == 's'
				|| s[i + 1] == 'p'
				|| s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] == 'u'
				|| s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == '%'))
		{
			total += ft_process_symbol_one(list_params, s[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar_fd(s[i++], 1);
			total++;
		}
	}
	va_end(list_params);
	return (total);
}
