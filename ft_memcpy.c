/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:52:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/30 23:44:11 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int main ()
{
    char *src = "Hello les coupinous";
    char *dest = malloc(100);

    ft_memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("%s\n", dest);
    free(dest);

    return 0;
}