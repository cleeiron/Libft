/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 12:52:46 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 16:47:40 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *str, int c)
{
    int i = 0;
    char *res = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == c)
           res = &str[i];
        
        if(c == '\0')
            return &str[i];
        i++;
    }
    return res;
}
