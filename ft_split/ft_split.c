/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:38:41 by cleiron           #+#    #+#             */
/*   Updated: 2026/05/19 22:27:58 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char **ft_split(char const *s, char c)
{
    char **tab;
    int i = 0;
    int countwords = 0;
    int k = 0;
    int j = 0;
    int len = 0;

 /* i = position dans s
j = numéro du mot dans tab
len = longueur du mot
k = position dans le mot*/

    while(s[i] != '\0')
    {
        if(s[i] != c && (i == 0 || s[i -1] == c))
            countwords++;
        if(s[i] == '\0')
            break;
        
        i++;
    }
    
    i = 0;

    tab = malloc(sizeof(char *) * (countwords + 1));
    
    if(!tab)
        return NULL;
    

    while(s[i] != '\0')
    {
        while(s[i] == c)
        {
            i++;
        }
        len = 0;
        while(s[i + len] != '\0' && s[i + len] != c)
            len ++;
            
        tab[j] = malloc(sizeof(char) * (len +1));

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

int main()
{
    char *s1 = "Chocolat au lait";
    char c = ' ';
    int i = 0;

    char **new;

    new = ft_split(s1, c);

    while(new[i])
    {
        printf("%s\n", new[i]);
        free(new[i]);
        i++;
    }

    free(new);

    return 0;
}