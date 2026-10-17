/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:23:03 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/17 19:01:13 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void print(void *content)
{
	printf("%s\n", (char *)content);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst || !f)
		return;
	while(lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}	
}

int main()
{
	t_list *lst1;
	t_list *lst2;

	lst1 = ft_lstnew(ft_strdup("hola"));
	lst2 = ft_lstnew(ft_strdup("chicas"));

	printf("lst1 = %p\n", (void *)lst1);
	printf("lst2 = %p\n", (void*)lst2);
	if(!lst1 || !lst2)
		return 1;
	
	lst1->next = lst2;
	lst2->next = NULL;
	print(lst1->content);
	ft_lstiter(lst1, print);
	ft_lstclear(&lst1, free);
	return 0;
}