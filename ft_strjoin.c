/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:19:12 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/18 20:46:22 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t len_join(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    return len1 + len2;

}
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t lentotal;
    char *plus;

    i = 0;
    j = 0;
    lentotal = len_join(s1, s2);
    plus = malloc(sizeof(char) * (lentotal +1));
    if(!plus)
        return NULL;
    while(s1[i])
    {
        plus[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        plus[i + j] = s2[j];
        j++;
    }
    plus[i + j] = '\0';
    return (plus);
}

/*int main ()
{
    
    printf("%s\n", ft_strjoin("hello", "aloha"));
    return 0;
}*/