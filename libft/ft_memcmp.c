/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:39:53 by zlee              #+#    #+#             */
/*   Updated: 2024/11/08 22:41:53 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_one;
	unsigned char	*ptr_two;
	size_t			count;

	count = 0;
	ptr_one = (unsigned char *)s1;
	ptr_two = (unsigned char *)s2;
	while (count < n)
	{
		if (ptr_one[count] != ptr_two[count])
			return ((int)(ptr_one[count] - ptr_two[count]));
		count++;
	}
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
	//char string[] = "abcdefg";
	//char string2[] = "ABCDEFG";
	//printf("%d\n", ft_memcmp(string2, string, sizeof(string)));
//
	//int	arr[5] = {1,2,3,4,5};
	//int	arr2[5] = {1,2,3,7,5};
	//printf("%d\n", ft_memcmp(arr, arr2, 4 * sizeof(int)));
//}
