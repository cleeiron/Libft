/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:10:40 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/08 18:49:27 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *s;
    s = (unsigned char *)src;

    while(i < n)
    {
        if(s[i] == (unsigned char)c)
            return (void *)&s[i];
        i++;
    }
    return NULL;
}

int main ()
{
    char tab[] = {'A', 'B', '\0', 'C'};

    char *p = ft_memchr(tab, 'D', 4);
    printf("%c\n", *p);
    return 0;
}