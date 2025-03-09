/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:38:16 by zlee              #+#    #+#             */
/*   Updated: 2025/01/15 22:07:13 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		(*lst)->next = NULL;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
//#include <stdio.h>
//int main(void)
//{
	//t_list *test = ft_lstnew("Hello World");
	//t_list *test2 = ft_lstnew("Hello im in front");
//
	//ft_lstadd_front(&test, test2);
	//printf("%s\n", (char *)test->content);
	//printf("%s\n", (char *)test->next->content);
//}
