/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:13:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/12 13:46:25 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    
    char * memcpy;
    memcpy = malloc(sizeof(char) * len +1);
    if(!memcpy)
        return NULL;
    while(i < len)
    {
        memcpy[i] = s[i];
        i++;
    }
    memcpy[i] = '\0';
    return memcpy; 
}

