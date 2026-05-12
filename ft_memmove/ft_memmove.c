/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:14:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/31 22:26:47 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char *s;
    unsigned char  *d;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;

    size_t i = 0;

    if(!dest || !src)
        return NULL;

    if(d < s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }

    else
    {
        i = n;
        while(i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dest;
}

int main ()
{
    char str[] = "Cosmic";

    ft_memmove(str + 2, str, 4);
    printf("%s\n", str);
    
    return 0;
}