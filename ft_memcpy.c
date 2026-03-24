/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:52:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/24 17:34:23 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *src, size_t count, void *dest)
{
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;

    size_t i = 0;

    while(i < count)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

int main ()
{
    char *src = "Hello les coupinous";
    char *dest;

    ft_memcpy(src, 6, dest);
    printf("%s\n", dest);

    return 0;
}