/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:19:12 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/12 14:06:17 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t len1;
    size_t len2;
    size_t lentotal;
    char *plus;

    i = 0;
    j = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
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
    
    printf("%s\n", ft_strjoin("hello", "aloha"));
    return 0;
}