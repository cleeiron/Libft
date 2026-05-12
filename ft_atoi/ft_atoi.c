/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:25:26 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/12 17:09:21 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int digit = 0;
    int result = 0;

    while(str[i] == 127 || (str[i] >= 0 && str[i] <= 40))
        i++;
        
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
        
    while(str[i] >= 48 && str[i] <= 57)
        {
            digit = str[i] - '0';
            result = result * 10 + digit;
            i++; 
        }
    return result *sign;
}

int main()
{
    char *str = "--236cc";

    printf("%d\n", ft_atoi(str));

    return 0;
}
    
        
