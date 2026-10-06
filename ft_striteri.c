/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:52:11 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:31:42 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdlib.h>
#include<stdio.h>*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i = 0;

    if(!s || !f)
        return;

    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}