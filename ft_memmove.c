/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:14:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/30 23:48:43 by cleiron          ###   ########.fr       */
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

    while(s[i] != '\0')
    {
        i++;
    }

    while(i != n)
    {
        i--;
    }

    while(i <= n)
    {
        d[i] = s[i];
        i--;
    }

    return dest;
}

int main ()
{
    char *src = "Hello les coupinous";
    char *dest = malloc(100);

    ft_memmove(dest, src, 6);
    printf("%s\n", dest);
    free(dest);

    return 0;
}