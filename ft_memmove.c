/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:14:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/24 17:34:26 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *src, size_t n, void *dest)
{
    unsigned char *s;
    unsigned char  *d;

    s = (unsigned char *)src;
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
        s[i] = d[i];
        i--;
    }

}

int main ()
{
    char *src = "Hello les coupinous";
    char *dest;

    ft_memmove(src, 6, dest);
}