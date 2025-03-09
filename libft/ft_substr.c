/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:04:46 by zlee              #+#    #+#             */
/*   Updated: 2024/11/15 10:44:35 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	c;

	c = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if ((start + len) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (s[start + c] != '\0' && c < len && len != 0)
	{
		substr[c] = s[start + c];
		c++;
	}
	substr[c] = '\0';
	return (substr);
}
//#include <stdio.h>
//int	main(void)
//{
	//char string[] = "lorem ipsum dolor sit amet";
	//char *substr = ft_substr(string, 0, 10);
	//printf("%s\n", substr);
	//free(substr);
//}
