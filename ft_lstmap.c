/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:02:23 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/18 22:19:04 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lst1;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	lst1 = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&lst1, del);
			return (NULL);
		}
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return (lst1);
}

/*int main()
{
	t_list *lst1;
	t_list *lst2;
	t_list *tmp;
	t_list *newlst;
	
	
	lst1 = ft_lstnew(ft_strdup("Hola"));
	lst2 = ft_lstnew(ft_strdup("La libft"));
	tmp = NULL;
	if(!lst1 || !lst2)
	return 1;
	
	lst1->next = lst2;
	tmp = lst1;
	while(tmp != NULL)
	{
		printf("Chaque maillons %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	newlst = ft_lstmap(lst1, to_upper, free);
	if(!newlst)
	{
		ft_lstclear(&lst1, free);
		return 1;
	}
	tmp = newlst;
	while(tmp != NULL)
	{
		printf("La nouvelle %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	
	return 0;
}*/
/*static void *to_upper(void *content)
{
	char *str;
	int i;

	i = 0;
	str = ft_strdup((char *)content);
	if(!str)
		return NULL;
	while(str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return str;
}*/