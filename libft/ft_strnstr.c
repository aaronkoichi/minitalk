/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:23:04 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 14:31:06 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	c_two;

	c = 0;
	c_two = 0;
	if (!*little)
		return ((char *)big);
	while (c < len && big[c] != '\0')
	{
		while (big[c + c_two] == little[c_two] && c + c_two < len)
		{
			c_two++;
			if (little[c_two] == '\0')
				return ((char *)&big[c]);
		}
		c_two = 0;
		c++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char *string = "Free fried chicken provided by KFC.";
	char *set = "chicken";
	printf("%s\n", ft_strnstr(string, set, ft_strlen(string)));
	printf("%s\n", ft_strnstr(string, set, 8));
	printf("%s\n", ft_strnstr(string, set, 14));

	write(1, "\n", 1);
	char *string2 = "";
	printf("%s\n", ft_strnstr(string2, set, ft_strlen(string2)));
	printf("%s\n", ft_strnstr(string2, set, 8));
	printf("%s\n", ft_strnstr(string2, set, 14));

	write(1, "\n", 1);
	char	*set2 = "";
	printf("%s\n", ft_strnstr(string, set2, ft_strlen(string)));
	printf("%s\n", ft_strnstr(string, set2, 8));
	printf("%s\n", ft_strnstr(string, set2, 14));
}
*/
