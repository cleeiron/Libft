/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 18:11:42 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:29:35 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    
    if(n >= 10)
    {
        ft_putnbr_fd(n/10, fd);
    }
    
    ft_putchar_fd(n % 10 + '0', fd);
   
}