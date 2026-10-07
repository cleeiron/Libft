/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:39:29 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 17:03:56 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i = 0;
    char *new_s;

    new_s = malloc(sizeof(char) * len +1);

    if(!new_s)
        return NULL;
        
    while(i < len && s[start + i] != '\0')
    {
        new_s[i] = s[start + i];
        i++;
    }
    new_s[i] = '\0';

    return new_s;
}
