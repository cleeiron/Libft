/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:21:27 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/03 16:23:42 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return 1;
    
    return 0;
}

/*int main ()
{
    char c = ';';

    printf("%d\n", ft_isascii(c));
    return 0;
}*/