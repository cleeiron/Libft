/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:24:44 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/03 16:22:24 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *str)
{
     size_t len;
     len = 0;

    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

/*int main ()
{
    char str[6]= "Hello";

    printf("%d\n", ft_strlen(str));

    return 0;
}*/