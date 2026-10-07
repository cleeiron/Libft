/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:32:07 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 16:46:58 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *str, int c)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == c)
            return &str[i];
        i++;
    }
    if(c == '\0')
        return &str[i];
    return 0;
}
