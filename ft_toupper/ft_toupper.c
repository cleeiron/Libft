/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 10:45:41 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/05 10:54:21 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_toupper(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
             str[i]= str[i] -32;
        }
        i++;
    }
    return str;
}

int main ()
{
    char str[10] = "Hello";

    ft_toupper(str);

    printf("%s\n", str);
    return 0;
}
