/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 12:52:46 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:34:37 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>*/

char *ft_strrchr(char *str, int c)
{
    int i = 0;
    char *res = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
           res = &str[i];
        }
        
        if(c == '\0')
            return &str[i];
        i++;
    }
    return res;
}

/*int main ()
{
    printf("%s\n", ft_strrchr("coucou", 'u'));

    return 0;
}*/