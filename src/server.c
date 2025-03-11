/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:00:21 by zlee              #+#    #+#             */
/*   Updated: 2025/03/12 00:34:19 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	handle_signal(int signum, siginfo_t *client, void *context)
{
	static char	charac;
	static int	count;
	static pid_t client_pid;

	(void)context;

	if (client->si_pid)
		client_pid = client->si_pid;
	if (signum == SIGUSR1)
		charac |= (1 << count);
	count++;
	if (count == CHAR_BIT)
	{
		ft_printf("%c", charac);
		if (charac == 0)
		{
			kill(client_pid, SIGUSR1);
			write(1, "\n", 1);
		}
		charac = 0;
		count = 0;
	}
	kill(client_pid, SIGUSR2);
}

int main(void)
{
	struct sigaction action;

	sigemptyset(&action.sa_mask);
	action.sa_flags = SA_SIGINFO | SA_RESTART;
	action.sa_sigaction = handle_signal;
	
	;
	sigaddset(&action.sa_mask, SIGUSR1);
	sigaddset(&action.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	ft_printf("PID: %d\n", getpid());
	while (1)
		pause();
	exit (EXIT_SUCCESS);
}
