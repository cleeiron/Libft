/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 15:35:57 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/08 18:27:11 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while(i < n)
    {
        if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
        { 
            return (unsigned char)s1[i] - (unsigned char)s2[i];   
        }
        i++;
    }
    return 0;
}