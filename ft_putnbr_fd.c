/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 18:11:42 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/13 14:54:40 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    nb = n;
    if(nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr_fd(nb/10, fd);
    }
    ft_putchar_fd(nb % 10 + '0', fd);
}