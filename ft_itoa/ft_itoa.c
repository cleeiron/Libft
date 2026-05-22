/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:37:24 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/22 10:53:41 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char *ft_itoa(int n)
{
    long nb = n;
    char *str;
    int len = 0;
    int i = 0;
    long temp = nb;

    if(temp == 0)
        len = 1;

    if(temp < 0)
    {
        temp = -temp;
        len++;
    }

    while(temp > 0)
    {
        temp = temp /10;
        len++;
    }

    str = malloc(sizeof(char) * (len +1));
    if(!str)
        return NULL;
    
    str[len] = '\0';

    if(nb == 0)
        str[0] = '0';
    
    if(nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    
    while(nb > 0)
    {
        str[len -1] = (nb % 10) + '0';
        nb = nb /10;
        len--;
    }
    return str;
}

int main ()
{
    int n = -628063;
    char *str;

    str = ft_itoa(n);
    printf("%s\n", str);

    return 0;

}