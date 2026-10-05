/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:03:31 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:26:21 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t total;
    size_t i;

    total = nmemb * size;
    ptr = malloc(total);

    if(!ptr)
        return (NULL);
    
    i = 0;

    while(i < total)
    {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}