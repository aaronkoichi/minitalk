/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:00:15 by zlee              #+#    #+#             */
/*   Updated: 2025/03/11 21:31:46 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	aknowledge_sig(int signum, siginfo_t *info, void *context)
{
	(void)context;
	ft_printf("OK! (from PID %d)\n", info->si_pid);
}


void	process_message(int pid, char *msg)
{
	int		count;
	char	temp;

	count = -1;
	while (*msg)
	{	
		while (++count < CHAR_BIT)
		{	
			temp = *msg >> count;
			if (temp & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			ft_printf("%d\n", count);
			usleep(100);
		}
		msg++;
		count = -1;
	}
	while (++count < 8)
	{
		kill(SIGUSR2, pid);
		usleep(100);
	}
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
	if (argc != 3)
		return (EXIT_FAILURE);
	else
	{
		pid = ft_atoi(argv[1]);
		ft_printf("pid: %d\n", pid);
		message = ft_strdup(argv[2]);
		ft_printf("message: %s\n", message);
		process_message(pid, message);
		free(message);
	}
}
