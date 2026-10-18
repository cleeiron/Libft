/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:57:08 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/18 22:13:55 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main ()
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("tete de liste");
	new = ft_lstnew("grosse tete");
	
	if(!head || !new)
		return 1;
		
	head->next = new;
	new->next = NULL;
	ft_lstadd_front(&head, new);

	printf("Premier :%s\n", (char*)head->content);
	printf("Deuxieme :%s\n", (char*)head->next->content);
	free(head);
	free(new);
	
	return 0;
}*/