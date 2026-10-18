/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:52:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/18 21:29:06 by cleiron          ###   ########.fr       */
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
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

