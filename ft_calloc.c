/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:03:31 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/18 22:19:34 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (size != 0 && (num * size) / size != num)
		return (NULL);
	mem = (malloc(num * size));
	if (!mem)
		return (NULL);
	ft_bzero(mem, (num * size));
	return (mem);
}

/*int main ()
{
	int *p;
	p = ft_calloc(6, 1);
	printf("size of p is %d", sizeof(p));
	printf("%ld\n", p);
	return 0;
}*/