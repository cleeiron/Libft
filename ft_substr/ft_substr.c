/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:39:29 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/17 17:16:03 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i = 0;
    char *new_s;

    new_s = malloc(sizeof(char) * len +1);

    if(!new_s)
        return NULL;
        
    while(i < len && s[start + i] != '\0')
    {
        new_s[i] = s[start + i];
        i++;
    }
    new_s[i] = '\0';

    return new_s;
}

int main()
{
    char const *s = "SalutAloha";

    char *new;

    new = ft_substr(s, 5, 5);
    printf("%s\n", new);

    return 0;
}