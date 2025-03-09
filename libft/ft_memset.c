/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:26:01 by zlee              #+#    #+#             */
/*   Updated: 2024/11/14 12:18:11 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*initial;
	size_t			count;

	count = 0;
	initial = s;
	while (count < n)
	{
		*initial = (unsigned char)c;
		initial++;
		count++;
	}
	return (s);
}
//#include <stdio.h> 
//int	main(void)
//{
	//char test[] = "Hello World!";
	//int list[6];
	//int	charac = 'A';
	//memset(list, charac, 5);
	//memset(list, charac, 6 * sizeof(int));
//
	//printf("%s\n", test);
	//printf("%d\n", list[0]);
	//printf("%d\n", list[1]);
	//printf("%d\n", list[2]);
	//printf("%d\n", list[3]);
//}
