/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:05:13 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/03 16:23:31 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int ft_isalnum(int c)
{
  if(ft_isalpha(c) || ft_isdigit(c))
        return 1;

    return 0;
}

/*int main ()
{
    char a = 'a';
    char b = '6';
    char c = ' ';

    printf("%d\n", ft_isalnum(a));
    printf("%d\n", ft_isalnum(b));
    printf("%d\n", ft_isalnum(c));

    return 0;
}*/