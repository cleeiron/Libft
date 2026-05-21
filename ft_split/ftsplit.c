/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftsplit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:12:09 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/21 13:25:41 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char **ftsplit(char const *s, char c)
{
     /* i = position dans s
j = numéro du mot dans tab
len = longueur du mot
k = position dans le mot*/
    char **tab;
    int countwords;
    int i = 0;
    int j = 0;
    int k = 0;
    int len = 0;

    while(s[i] != '\0')
    {
        if(s[i] != c && (i == 0 || s[i - 1] == c))
            countwords++;
        i++;
    }

    tab = malloc(sizeof(char *) * (countwords +1));
    if(!tab)
        return NULL;

    i = 0;

    while(s[i] != '\0')
    {
        while(s[i] == c)
        {
            i++;
        }
        len = 0;
        while(s[i + len] != '\0' && s[i + len] != c)
            len++;

        tab[j] = malloc(sizeof(char) * (len + 1));
        if(!tab[j])
            return NULL;

        k = 0;
        while(k < len)
        {
            tab[j][k] = s[i + k];
            k++;
        }
        tab[j][k] = '\0';
        i = i +len;
        j++;
    }

    tab[j] = NULL;

    return tab;

}