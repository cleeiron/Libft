/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:04:32 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:06:44 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main ()
{
    char *str;
    t_list *node;
    
    str = "Bonjour Libft !";
    node = ft_lstnew(str);
    if (!node)
        return 1;
    printf("Adresse du noeud : %p\n", (void *)node);
    printf("Adresse du contenu : %p\n", node->content);
    printf("Contenu : %s\n", (char *)node->content);
    printf("Next : %p\n", (void *)node->next);
    free(node);
    return 0;
}*/