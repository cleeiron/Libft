/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:39:29 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:53:50 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*newsub;

	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > (slen - start))
		len = slen - start;
	newsub = malloc(sizeof(char ) * (len) +1);
	if (!newsub)
		return (NULL);
	while (s[start + i] && i < len)
	{
		newsub[i] = s[start + i];
		i++;
	}
	newsub[i] = '\0';
	return (newsub);
}

/*int main ()
{
    char *s1;
    s1 = ft_strdup("");
    if(s1 == NULL)
        return 1;
    printf("Chaine vide [%s]\n", s1);
    free(s1);
    s1 = ft_substr("Hello", 2, 3);
    if(s1 == NULL)
        return 1;
    printf("%s\n", s1);
    free(s1);
    s1 = ft_substr("Hello", -2, 3);
    if(s1 == NULL)
        return 1;
    printf("%s\n", s1);
    free(s1);
    s1 = ft_substr("Hello", 2, -3);
    if(s1 == NULL)
        return 1;
    printf("%s\n", s1);
    free(s1);
    s1 = ft_substr("Hello", 0, 3);
    if(s1 == NULL)
        return 1;
    printf("%s\n", s1);
    free(s1);
    return 0;
}*/