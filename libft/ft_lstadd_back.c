/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:25:49 by zlee              #+#    #+#             */
/*   Updated: 2025/02/14 08:12:40 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (temp == NULL)
		*lst = new;
	else
	{
		while ((*lst)->next)
			lst = &(*lst)->next;
		(*lst)->next = new;
		(*lst)->next->next = NULL;
		lst = &temp;
	}
}
//#include <stdio.h>
//int	main(void)
//{
	//t_list	*l1 = ft_lstnew("First Node.");
	//t_list	*l2 = ft_lstnew("Second Node.");
	//t_list	*l3 = ft_lstnew("Third Node.");
//
	//ft_lstadd_back(&l1, l2);
	//ft_lstadd_back(&l1, l3);
//
	//printf("%s\n", (char *)l1->content);
	//printf("%s\n", (char *)l1->next->content);
	//printf("%s\n", (char *)l1->next->next->content);
	//
//}
