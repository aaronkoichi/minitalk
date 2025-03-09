/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:20:48 by zlee              #+#    #+#             */
/*   Updated: 2024/11/14 18:35:53 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;
	int		len;
	int		count;
	int		count_two;

	count = 0;
	count_two = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	total = (char *)malloc((len + 1) * sizeof(char));
	if (!total)
		return (NULL);
	while (count < len && s1[count] != '\0')
	{
		total[count] = s1[count];
		count++;
	}
	while (count < len && s2[count_two] != '\0')
	{
		total[count++] = s2[count_two++];
	}
	total[count] = '\0';
	return (total);
}
//#include <stdio.h>
//int	main(void)
//{
	//char str[] = "Hello, ";
	//char str2[] = "World.";
	//char *ptr = ft_strjoin(str, str2);
	//printf("%s\n", ptr);
//
//}
