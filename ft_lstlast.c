/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:39:55 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/13 17:11:06 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;
    while(lst->next != NULL)
        lst = lst->next;
    return lst;
}

/*int main ()
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *last;
    
    a = ft_lstnew("Bonjour");
    b = ft_lstnew("la");
    c = ft_lstnew("Libft");
    
    a->next = b;
    b->next = c;
    
    last = ft_lstlast(a);
    
    printf("Premier : %s\n", (char *) a->content);
    printf("Dernier : %s\n", (char *)last->content);
    printf("Dernier suivant : %p\n", (void *)last->next);

    free(a);
    free(b);
    free(c);

    return 0;
}*/