/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:32:18 by zlee              #+#    #+#             */
/*   Updated: 2024/11/11 08:47:24 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}
//#include <stdio.h>
//void	ft_freecontent(void *tofree)
//{
	//free(tofree);
//}
//int	main(void)
//{
	//t_list	*node_tofree = ft_lstnew(ft_strdup("Hello World."));
//
	//printf("%s\n", (char *)node_tofree->content);
	//ft_lstdelone(node_tofree, ft_freecontent);
//}
