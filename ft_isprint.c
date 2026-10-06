/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:05:14 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/03 16:23:24 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;

    return 0;
}

/*int main ()
{
    int c = 32;

    printf("%d\n", ft_isprint(c));
    return 0;
}*/