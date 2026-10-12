/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:03:31 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/08 11:03:22 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t num, size_t size)
{
    size_t i;
    void *mem;
    
    i = 0;
    mem = (malloc(sizeof(size)* num +1));
    if(!mem)
        return NULL;
    
    ft_bzero(mem, size);

    return mem;
}

int main ()
{
    int *p;
    p = ft_calloc(6, 1);
    printf("size of p is %d", sizeof(p));
    printf("%ld\n", p);
    return 0;
}