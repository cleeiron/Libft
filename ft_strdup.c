/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:13:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 17:05:55 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *str)
{
    int i = 0;
    int len = 0;
    
    char *copy;

    while(str[len] != '\0')
    {
        len++;
    }

    copy = malloc(sizeof(char) * len +1);
    
    if(!copy)
        return NULL;
    
    while(i < len)
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    
    return (copy);
}
