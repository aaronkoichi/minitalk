/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:50 by zlee              #+#    #+#             */
/*   Updated: 2024/12/03 20:25:32 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_putlong(unsigned long num);
int	count_digit(int n);
int	ft_process_symbol_one(va_list list_params, char sym);
int	ft_process_symbol_two(va_list list_params, char sym);
int	ft_putvoid(void *ptr);
int	ft_put_base_low(unsigned int num, char cap);
int	ft_put_base_low_long(unsigned long num, char cap);
#endif
