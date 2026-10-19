/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:08:26 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:07:53 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main ()
{
    t_list *a;
    t_list *b;
    t_list *c;

    a = ft_lstnew("Bonjour");
    b = ft_lstnew("la");
    c = ft_lstnew("Libft");

    if(!a || !b || !c)
    {
        free(a);
        free(b);
        free(c);
        return 1;
    }
    a->next = b;
    b->next = c;
    
    printf("Taille des noeuds  %d\n", ft_lstsize(a));
    
    free(a);
    free(b);
    free(c);
    
    return 0;
}*/