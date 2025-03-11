/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:46:27 by zlee              #+#    #+#             */
/*   Updated: 2025/03/10 15:07:38 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minitalk.h"

static void sighandler(int signum)
{
	ft_printf("\nRecieved SIGINT\n", signum);
	exit(0);
}

int main(void)
{
	char	test;
	int		count;

	count = 8;
	test = 'j';
	while (--count >= 0)
	{
		if (1 & (test >> count))
			ft_printf("1 ");
		else
			ft_printf("0 ");
	}
	ft_printf("\n");
	ft_putchar_fd(49, 1);
}
