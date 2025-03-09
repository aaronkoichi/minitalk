/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:07:21 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:49:22 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst || !f)
		return ;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
//
//void	ft_putendl(void *c)
//{
	//ft_putstr_fd(c, 1);
	//write(1,"\n", 1);
//}
//
//int	main(void)
//{
	//t_list	*node1 = ft_lstnew(ft_strdup("Hello World."));
	//t_list	*node2 = ft_lstnew(ft_strdup("This is the second node."));
	//t_list	*node3 = ft_lstnew(ft_strdup("This is the third node."));
//
	//ft_lstadd_back(&node1, node2);
	//ft_lstadd_back(&node1, node3);
//
	//ft_lstiter(node1, ft_putendl);
//}
