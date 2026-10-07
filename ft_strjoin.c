/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:19:12 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 17:04:09 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int len1 = 0;
    int len2 = 0;
    int lentotal = 0;
    char *plus;

    while(s1[len1] != '\0')
    {
        len1++;
    }

    while(s2[len2] != '\0')
    {
        len2++;
    }
    
    lentotal = len1 + len2;
    plus = malloc(sizeof(char) * (lentotal +1));

    if(!plus)
        return NULL;
    
    while(i < len1)
    {
        plus[i] = s1[i];
        i++;
    }
    while(j < len2)
    {
        plus[j + len1] = s2[j];
        j++;
    }

    plus[len1 + j] = '\0';

    return (plus);
}
