/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:00:12 by zlee              #+#    #+#             */
/*   Updated: 2025/03/18 10:33:22 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <limits.h>
# include <signal.h>

enum e_status
{
	BUSY = 0,
	READY
};

enum e_receive
{
	IDLE = 0,
	RECEIVED
};

typedef struct s_data
{
	enum e_status	status;
	enum e_receive	received;
}	t_data;

#endif
