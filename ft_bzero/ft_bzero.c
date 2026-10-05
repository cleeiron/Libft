/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:22:45 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:26:11 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_bzero(void *str, size_t n)
{
    unsigned char *s;

    s = (unsigned char*)str;

    while(n--)
    {
        *s++ = 0;
    }
}
