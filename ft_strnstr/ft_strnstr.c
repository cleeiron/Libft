/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:19:35 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/13 21:23:09 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    size_t j = 0;

    if(s2[j] == '\0')
        return (char *)s1;

    while(i < n && s1[i] != '\0')
    {
        j = 0;
        while(i+j < n && s1[i + j] == s2[j])
        {
            if(s2[j +1] == '\0')
                return (char*)&s1[i];
            j++;
        }
        i++;
    }
    return NULL;
}