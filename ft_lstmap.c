/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafa <arafa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:48:55 by arafa             #+#    #+#             */
/*   Updated: 2023/10/14 17:25:03 by arafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*node;

	if (!lst)
	{
		del(lst);
		free(lst);
	}
	lst2 = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&lst2, node);
		lst = lst->next;
	}
	return (lst2);
}
