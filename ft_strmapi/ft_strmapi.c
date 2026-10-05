/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:32:59 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:33:44 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<stdlib.h>*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    int len;
    char *new;

    if(!s || !f)
        return NULL;

    while(s[i] != '\0')
    {
        len++;
        i++;
    }

    new = malloc(sizeof(char) * (len +1));
    if(!new)   
        return NULL;
    
    i = 0;

    while(s[i] != '\0')
    {
        new[i] =f(i, s[i]);
        i++;
    }
    new[i] = '\0';

    return new;
}