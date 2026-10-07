/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:48:38 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/06 21:58:03 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t slen;

    i = 0;
    slen = ft_strlen(src);
    
    if(dstsize > 0)
    {
        while(src[i] != '\0' && i < dstsize-1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return slen;
}