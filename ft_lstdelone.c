/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:18:03 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/19 16:01:25 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main ()
{
	t_list *maillon;

	maillon = ft_lstnew(ft_strdup("hello"));
	if(!maillon)
		return 1;
	printf("avant supression %s\n", (char *)maillon->content);
	ft_lstdelone(maillon, free);
	maillon = NULL;
	printf("apres supression %p\n", (void *)maillon);
	return 0;
}*/