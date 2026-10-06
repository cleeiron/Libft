/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:50:10 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/03 16:23:00 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return 1;
    
    return 0;
}

/*int main()

{
   char c = '6';
   
   printf("%d\n", ft_isdigit(c));

   return 0;
}*/