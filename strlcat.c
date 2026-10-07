/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:16:40 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/06 22:27:13 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t slen;

    i = 0;
    slen = ft_strlen(src);
    while(i < dstsize)
    {
        if(dst[i] == '\0')
        {
            dst[i] = src[i];
            i++;
        }
        else
        {
            
        }
        i++;

    }


}