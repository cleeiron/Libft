/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:28:52 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/10 19:59:23 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include <stdlib.h>

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    
    else return 0;
}

/*int main ()

{
    char c = 6;

    printf("%d\n", ft_isalpha(c));

    return 0;
}*/
