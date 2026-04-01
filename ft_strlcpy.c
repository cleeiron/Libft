/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:16:12 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/01 17:44:45 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dest, size_t n, const char *src)
{
    size_t i = 0;
    size_t slen = 0;


    while(src[slen] != '\0')
    {
        slen++;
    }

    if(n > 0)
    {
        while(src[i] && i < n-1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    
    return slen;
}

int main()
{
    char dest[10] = "Cosmic";
    char *src = "hell";

    printf("%ld\n", ft_strlcpy(dest, 5,src));

    return 0;

}