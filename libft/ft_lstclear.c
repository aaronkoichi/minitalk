/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:45:53 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:47:32 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = NULL;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}
//#include <stdio.h>
//void	ft_freecontent(void *tofree)
//{
	//free(tofree);
//}
//int	main(void)
//{
	//t_list	*node1 = ft_lstnew(ft_strdup("First Node."));
	//t_list	*node2 = ft_lstnew(ft_strdup("Second Node."));
	//t_list	*node3 = ft_lstnew(ft_strdup("Please check Valgrind."));
//
	//ft_lstadd_back(&node1, node2);
	//ft_lstadd_back(&node1, node3);
//
	//printf("%s\n", (char *)node1->content);
	//printf("%s\n", (char *)node2->content);
	//printf("%s\n", (char *)node3->content);
//
	//ft_lstclear(&node1, ft_freecontent);
//}
//
