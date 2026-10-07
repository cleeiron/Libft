/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:03:31 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 17:30:31 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* calloc(size_t num, size_t size)
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
    ft_calloc()
}