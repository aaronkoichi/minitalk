/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:19:32 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:47:13 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (!lst)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (NULL);
	head = temp;
	while (lst->next)
	{
		temp->next = ft_lstnew(f(lst->next->content));
		if (!temp->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}
//
//void	ft_freecontent(void *tofree)
//{
	//free(tofree);
//}
//
//void	*ft_modify(void *c)
//{
	//c = ft_strdup("This is modified");
	//return (c);
//}
//#include <stdio.h>
//int	main(void)
//{
	//
	//t_list	*node1 = ft_lstnew(ft_strdup("Hello World."));
	//t_list	*node2 = ft_lstnew(ft_strdup("This is the second node."));
	//t_list	*node3 = ft_lstnew(ft_strdup("This is the third node."));
	//
	//ft_lstadd_back(&node1, node2);
	//ft_lstadd_back(&node1, node3);
//
	//t_list	*node_answers = ft_lstmap(node1, ft_modify, ft_freecontent);
//
	//printf("%s\n", (char *)node_answers->content);
	//printf("%s\n", (char *)node_answers->next->content);
	//printf("%s\n", (char *)node_answers->next->next->content);
//
	//ft_lstclear(&node_answers, ft_freecontent);
//}
