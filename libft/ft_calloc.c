/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:34:47 by zlee              #+#    #+#             */
/*   Updated: 2024/11/13 10:39:56 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > (size_t) -1 / nmemb)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	return (ft_bzero(arr, size * nmemb));
}
//#include <stdio.h>
//int main(void)
//{
	//int *num;
	//num = (int *)ft_calloc(0, sizeof(int));
	//char *words = (char *)ft_calloc(10, 1);
	//printf("%d ", num[0]);
	//printf("%d ", num[1]);
	//printf("%d ", num[2]);
	//printf("%d ", num[3]);
	//printf("%d \n", num[4]);
//
	//printf("%d\n", words[0]);
	//printf("%d\n", words[9]);
	//printf("%d\n", words[11]);
//}
