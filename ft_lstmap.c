/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:02:23 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/17 19:45:30 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *lst1;
	void *content;
	if(!lst || !f || !del)
		return NULL;
	lst1 = NULL;
	while(lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if(!new)
		{
			del(content);
			ft_lstclear(&lst1, free);
			return NULL;
		}
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return(lst1);
}