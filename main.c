/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:32:46 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/08 18:24:47 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int main ()
{
    // strlcat
    printf("%ld\n", strlcat("cou", "cou", 0));
    printf("%ld\n", ft_strlcat("cou", "cou", 0));
     printf("%ld\n", strlcat("cou", "cou", 3));
    printf("%ld\n", ft_strlcat("cou", "cou", 3));
    // strrchr
    char *p;
    p = ft_strrchr("coucou", 'c');
    printf("%p\n", p);
    
    return 0;
}