/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:59:59 by cleiron           #+#    #+#             */
/*   Updated: 2026/09/18 15:35:06 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<stdlib.h>*/

int is_in_set(char c, char const *set)
{
    int i = 0;

    while(set[i] != '\0')
    {
        if(c == set[i])
            return 1;
        i++;
    }

    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int end = 0;
    int start = 0;
    int i = 0;
    char *new;

    
    while(s1[end] != '\0')
        end++;
    
    while(s1[start] != '\0' && is_in_set(s1[start], set))
        start++;

    while(end > start && is_in_set(s1[end -1], set))
        end--;

    new = malloc(sizeof(char) * (end - start +1));
   
    if(!new)
        return NULL;

    while(start < end)
    {
        new[i] = s1[start];
        i++;
        start++;
    }
    new[i] = '\0';
    return new;
}

/*int main ()
{
    char *str = "-*-aloha-**-";
    char *set = "*-";
    char *final;

    final = ft_strtrim(str, set);
    printf("%s\n", final);

    free(final);

    return 0;
    
}*/