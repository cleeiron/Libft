/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:13:18 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:31:30 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<stdlib.h>*/

char *ft_strdup(char *str)
{
    int i = 0;
    int len = 0;
    
    char *copy;

    while(str[len] != '\0')
    {
        len++;
    }

    copy = malloc(sizeof(char) * len +1);
    
    if(!copy)
        return NULL;
    
    while(i < len)
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    
    return (copy);
}

/*int main()
{
    char *str = "aloha";
    char *duply;

    duply = ft_strdup(str);
    printf("%s\n", duply);

    free(duply);

    return 0;
}*/