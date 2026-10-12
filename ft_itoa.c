/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:37:24 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/12 17:10:24 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int len_number(int n)
{
    long nb;
    int len;
    
    len = 0;
    nb = n;
    if(nb == 0)
        len = 1;
    if(nb < 0)
    {
        nb = -nb;
        len++;
    }
    while(nb > 0)
    {
        nb = nb /10;
        len++;
    }
    return len;
}

static void convert_num(char *str, long nb, int len)
{
    while(nb > 0)
    {
        str[len -1] = (nb % 10) + '0';
        nb = nb /10;
        len--;
    }
}

char *ft_itoa(int n)
{
    long nb;
    char *str;
    int len;
    
    nb = n;
    len = len_number(nb);
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
    convert_num(str, nb, len);
    return str;
}

int main ()
{
    int n = -628063;
    char *str;

    str = ft_itoa(n);
    printf("%s\n", str);
    free(str);
    return 0;

}