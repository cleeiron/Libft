/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:25:26 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/07 17:03:17 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int digit = 0;
    int result = 0;

    while(str[i] == 127 || (str[i] >= 0 && str[i] <= 40))
        i++;
        
    if((str[i] == '-' || str[i] == '+' && str[i])
        && (str[i +1] == '-' || str[i +1] == '+'))
        return 0;
    else if(str[i] == '-')
    {
        sign = -sign;
        i++;
    }     
    while(str[i] >= 48 && str[i] <= 57)
        {
            digit = str[i] - '0';
            result = result * 10 + digit;
            i++; 
        }
    return result * sign;
}

