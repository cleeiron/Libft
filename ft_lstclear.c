/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:39:23 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/17 18:51:39 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *adress;
	t_list *next;
	
	if(!del || !lst)
		return;
	adress = *lst;
	while(adress != NULL)
	{
		next = adress->next;
		ft_lstdelone(adress, del);
		adress = next;
	}
	*lst = NULL;
}

/*int main()
{
	t_list *first;
	t_list *sec;
	t_list *third;

	first = ft_lstnew(ft_strdup("1"));
	sec = ft_lstnew(ft_strdup("2"));
	third = ft_lstnew(ft_strdup("3"));
	if(!first || !sec || !third)
		return 1;

	first->next = sec;
	sec->next = third;
	third->next = NULL;
	printf("Avant supression %s, %s, %s\n",
		 (char *)first->content, (char *)sec->content, (char *)third->content);
	ft_lstclear(&first, free);
	printf("Apres supression %p, %p, %p\n", 
			(void *)first, (void *)sec,(void *)third);
	return 0;
}*/