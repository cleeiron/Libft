/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:42:54 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/06 15:14:09 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *mem;
    size_t i = 0;

    mem = (unsigned char*)str;
    while(i < n)
    {
        mem[i] = (unsigned char)c;
        i++;
    }
    return mem;
}

/*int main ()

{
    char str[6] = "Hello";

    ft_memset(str, 'c', 6);
    printf("%s\n", str);

    return 0;  
}*/