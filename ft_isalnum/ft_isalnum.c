/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:05:13 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/12 17:19:12 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
  if((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
        || ( c >= 97 && c <= 122))
        return 1;

    else return 0;
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