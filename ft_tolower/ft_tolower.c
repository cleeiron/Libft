/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:55:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/08 17:20:34 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_tolower(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] +32;
        }
        i++;
    }
    return str;
}

int main()
{
    char str[10] = "CoSmic";

    printf("%s\n", (ft_tolower(str)));

    return 0;
}