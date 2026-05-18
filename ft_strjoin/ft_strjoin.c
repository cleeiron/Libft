/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:19:12 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/18 17:26:07 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int len1 = 0;
    int len2 = 0;
    int lentotal = 0;
    char *plus;

    while(s1[len1] != '\0')
    {
        len1++;
    }

    while(s2[len2] != '\0')
    {
        len2++;
    }
    
    lentotal = len1 + len2;
    plus = malloc(sizeof(char) * (lentotal +1));

    if(!plus)
        return NULL;
    
    while(i < len1)
    {
        plus[i] = s1[i];
        i++;
    }
    while(j < len2)
    {
        plus[j + len1] = s2[j];
        j++;
    }

    plus[len1 + j] = '\0';

    return (plus);
}

int main ()
{
    char *part1 = "Aloha ";
    char *part2 = "y a du soleil !";

    char *total = ft_strjoin(part1, part2);

    printf("%s\n", total);

    return 0;
}