/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:16:40 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 16:36:23 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t slen;
    size_t dlen;

    i = 0;
    slen = ft_strlen(src);
    dlen = ft_strlen(dst);
    
    if(dstsize == 0)
        return slen;
        
    if(dstsize <= dlen)
        return dstsize + slen;
        
    while(src[i] != '\0' && (dlen + i) < dstsize - 1)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[i] = '\0';
        
    return dlen + slen;

}
