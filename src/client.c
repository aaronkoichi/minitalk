/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:00:15 by zlee              #+#    #+#             */
/*   Updated: 2025/03/18 10:33:00 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

t_data	g_status = {0};

void	aknowledge_sig(int signum, siginfo_t *info, void *context)
{
	(void)context;
	if (signum == SIGUSR1)
	{
		ft_printf("Message Fully Received! (from PID %d)\n", info->si_pid);
		g_status.status = READY;
	}
	else
	{
		if (g_status.received == IDLE)
		{
			ft_printf("Sent! (from PID %d)\n", info->si_pid);
			g_status.received = RECEIVED;
		}
		g_status.status = READY;
	}
}

void	process_char(int pid, char c)
{
	int		count;
	char	temp;

	count = -1;
	while (++count < CHAR_BIT)
	{	
		temp = c >> count;
		if (temp & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_status.status == BUSY)
			usleep(1);
		g_status.status = BUSY;
	}
}

void	process_message(int pid, char *msg)
{
	while (*msg)
	{	
		process_char(pid, *msg);
		msg++;
	}
	process_char(pid, 0);
}

int	main(int argc, char **argv)
{
	int					pid;
	char				*message;
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_sigaction = aknowledge_sig;
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	if (argc != 3)
		return (EXIT_FAILURE);
	else
	{
		pid = ft_atoi(argv[1]);
		message = ft_strdup(argv[2]);
		process_message(pid, message);
		free(message);
	}
}
