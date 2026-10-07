/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:52:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 16:37:29 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dest,const void *src, size_t n)
{
    const unsigned char *s;
    unsigned char *d;
    
    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    size_t i = 0;

    if(!dest || !src)
        return NULL;
    
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

