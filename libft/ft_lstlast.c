/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:16:03 by zlee              #+#    #+#             */
/*   Updated: 2024/11/15 10:17:17 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*buffer;

	buffer = lst;
	if (lst == NULL)
		return (NULL);
	while (buffer->next != NULL)
		buffer = buffer->next;
	return (buffer);
}
//#include <stdio.h>
//int	main(void)
//{
	//t_list *l1 = ft_lstnew("Hello World.");
	//t_list *l2 = ft_lstnew("Testing");
	//t_list *l3 = ft_lstnew("Nothing meaningful over here.");
//
	//ft_lstadd_back(&l1, l2);
	//ft_lstadd_back(&l1, l3);
	//t_list *last = ft_lstlast(l1);
//
	//printf("%s\n",(char *)last->content);
//}
