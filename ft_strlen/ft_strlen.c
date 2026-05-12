/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:24:44 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/15 20:53:43 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main ()
{
    char str[6]= "Hello";

    printf("%d\n", ft_strlen(str));

    return 0;
}