/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:12:09 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/13 12:19:40 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t clean_split(char **tab, size_t numt)
{
    while(numt > 0)
    {
        numt--;
        free(tab[numt]);
    }
    free(tab);
    return 0;
}

static size_t count_words(const char *s, char c)
{
    size_t countwords;
    size_t i;
    
    i = 0;
    countwords = 0;
    while(s[i])
    {
        if(s[i] != c && (i == 0 || s[i - 1] == c))
            countwords++;
        i++;
    }
    return countwords;
}
static size_t len_split(const char *s, char c)
{
    size_t len;

    len = 0;
    while(s[len] != '\0' && s[len] != c)
        len++;
    return len;
}

static size_t fill_split(char ** tab, const char *s, char c)
{
    size_t i;
    size_t len;
    size_t numt;

    i = 0;
    numt = 0;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        if(s[i])
        {
            len = len_split(&s[i], c);
            tab[numt] = ft_substr(s, i, len);
            if(!tab[numt])
                return clean_split(tab, numt);
            i = i + len;
            numt++;
        }
    }
    tab[numt] = NULL;
    return 1;
}

char **ft_split(char const *s, char c)
{
    char **tab;
    size_t countwords;
    
    countwords = count_words(s, c);
    tab = malloc(sizeof(char *) * (countwords +1));
    if(!tab)
    return NULL;
    if(fill_split(tab, s, c) != 1)
        return NULL;
    return tab;
}
/*int main()
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
}*/