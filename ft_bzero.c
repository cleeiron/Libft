/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:22:45 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/30 22:54:02 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *str, size_t n)
{
    size_t i = 0;
    unsigned char mem;

    mem =(unsigned char*)str;

    while(i < n)
    {
        mem[i] = '\0';
        i++;
    }
}