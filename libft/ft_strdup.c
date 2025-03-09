/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:28:20 by zlee              #+#    #+#             */
/*   Updated: 2024/11/12 14:34:23 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char string[] = "Test Sentence.";
	char *string2 = ft_strdup(string);

	printf("%s\n", string2);
}
*/
