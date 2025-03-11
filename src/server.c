/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:00:21 by zlee              #+#    #+#             */
/*   Updated: 2025/03/11 21:36:05 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	handle_signal(int signum, siginfo_t *client, void *context)
{
	static char	charac;
	static int	count;

	(void)context;
	
	if (signum == SIGUSR1)
		charac = charac | (1 << count);
		
	else if (signum == SIGUSR2)
		charac |= (0 << count);
		
	count++;
	if (count == CHAR_BIT)
	{
		if (charac == 0)
			kill(client->si_pid, SIGUSR1);
		ft_printf("%c", charac);
		charac = 0;
		count = 0;
	}
}

int main(void)
{
	struct sigaction action;

	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_SIGINFO | SA_RESTART;
	action.sa_sigaction = handle_signal;
	
	;
	// sigaddset(&action.sa_mask, SIGUSR1);
	// sigaddset(&action.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	ft_printf("PID: %d\n", getpid());
	while (1)
		pause();
	exit (EXIT_SUCCESS);
}
