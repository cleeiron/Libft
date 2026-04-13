/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:58:13 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/13 20:17:15 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;

    const unsigned char *s;
    const unsigned char *c;
    s = (const unsigned char *)s1;
    c = (const unsigned char *)s2;

    while(i < n)
    {
        
        if(s[i] != c[i])
            return s[i] - c[i];
        i++;
    }
    return 0;
}

