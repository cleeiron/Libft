/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:32:07 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/08 18:19:06 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;

    while(s[i] != '\0')
    {
        if(s[i] == (unsigned char)c)
            return (char *)&s[i];
        i++;
    }
    if(c == '\0')
        return (char *)&s[i];
    return NULL;
}
