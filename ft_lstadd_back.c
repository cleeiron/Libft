/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:58:06 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 15:55:07 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*int main()
{
	t_list *head;
	t_list *second;
	t_list *new;

	head = ft_lstnew("en tête");
	second = ft_lstnew("2");
	new = ft_lstnew("je suis le nouveau");

	if(!head || !second || !new)
		return 1;

	head->next = second;
	new->next = NULL;

	printf("Le premier : %s\n", (char *)head->content);
	printf("Next de head : %p\n", (void *) head->next);
	printf("Next de second : %p\n", (void *) second->next);
	printf("Le contenu du dernier maillon %s\n",
		(char *)ft_lstlast(head)->content);

	ft_lstadd_back(&head, new);

	printf("Le premier %s\n", (char *)head->content);
	printf("Next de head %p\n", (void *) head->next);
	printf("Next de second : %p\n", (void *) second->next);
	printf("Le contenu du dernier maillon %s\n",
		 (char *)ft_lstlast(head)->content);
	
	free(head);
	free(second);
	free(new);

	return 0;
}*/ 