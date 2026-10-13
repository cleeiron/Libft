/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:12:09 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/12 21:51:56 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void clean_split(char **tab, size_t numt)
{
    while(numt > 0)
    {
        numt--;
        free(tab[numt]);
    }
    free(tab);
}

static size_t count_words(char *)


while(s[i])
{
    if(s[i] != c && (i == 0 || s[i - 1] == c))
        countwords++;
    i++;
}
char **ft_split(char const *s, char c)
{
    char **tab;
    size_t i;
    size_t numt;
    size_t countwords;
    size_t len;
    
    i = 0;
    numt = 0;
    tab = malloc(sizeof(char *) * (countwords +1));
    if(!tab)
        return NULL;
    i = 0;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        if(s[i])
        {
            len = 0;
            while(s[i + len] != '\0' && s[i + len] != c)
                len++;
            tab[numt] = ft_substr(s, i, len);
            if(!tab[numt])
            {
                clean_split(tab, numt);
                return NULL;
            }  
            i = i + len;
            numt++; 
        }   
    }
    tab[numt] = NULL;
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