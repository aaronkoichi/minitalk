/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:12:31 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 09:17:23 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	count = -1;
	if (!s || !f)
		return ;
	while (s[++count] != '\0')
		f(count, &s[count]);
}
/*
static void	ft_putchar_t(unsigned int index, char *c)
{
	(void)index;
	write(1, &c[index], 1);
}
int	main(void)
{
	char string[] = "Hello World.....";
	ft_striteri(string, ft_putchar_t);
	write(1, "\n", 1);
}
*/
