/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:25:27 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:45:42 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
		return ;
	while (s[count] != '\0')
		write (fd, &s[count++], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("Hello, ", 1);
	ft_putendl_fd("World", 1);
}
*/
