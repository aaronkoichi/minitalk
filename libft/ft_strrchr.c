/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:12:28 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 14:29:58 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	if (s[count] == '\0' && c == '\0')
		return ((char *)&s[count]);
	while (count >= 0)
	{
		if ((unsigned char)s[count] == (unsigned char)c)
			return ((char *)&s[count]);
		count--;
	}
	return (NULL);
}
//#include <stdio.h>
//int	main(void)
//{
	//char string[] = "Hello World.";
	//printf("%c\n", *(char *)ft_strrchr(string, '\0'));
	//printf("%s\n", (char *)ft_strrchr(string, 'a'));
	//printf("%s\n", (char *)ft_strrchr(string, 'l'));
	//
//}
