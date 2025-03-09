/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:10:14 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 09:19:11 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
	//printf("%d\n", ft_lstsize(l1));
//}
