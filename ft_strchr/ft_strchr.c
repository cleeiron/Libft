/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:32:07 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:31:04 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

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

/*int main()
{  
    printf("%s\n", ft_strchr("coucou", '\0'));

    return 0;
}*/