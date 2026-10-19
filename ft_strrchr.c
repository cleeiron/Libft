/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 12:52:46 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:51:17 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastoc;
	int		i;

	i = 0;
	lastoc = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			lastoc = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (lastoc);
}
/*int main()
{
    char *p;
    p = ft_strrchr("coucou", 'c');
    printf("%p\n", p);
    return 0;
}*/