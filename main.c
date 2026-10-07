/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:32:46 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/07 16:35:23 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int main ()
{
    printf("%ld\n", strlcat("cou", "cou", 0));
    printf("%ld\n", ft_strlcat("cou", "cou", 0));
     printf("%ld\n", strlcat("cou", "cou", 3));
    printf("%ld\n", ft_strlcat("cou", "cou", 3));
    
    return 0;
}