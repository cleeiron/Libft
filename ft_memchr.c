/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:10:40 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 16:50:45 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i = 0;

    const unsigned char *s;
    s = (const unsigned char *)src;

    if(!src)
        return NULL;

    while(i < n)
    {
        if(s[i] == (unsigned char)c)
            return (void *)&s[i];
        i++;
    }
    return NULL;
}
