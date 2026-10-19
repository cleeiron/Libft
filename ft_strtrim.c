/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:59:59 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:51:29 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && (is_in_set(s1[start], set) == 1))
		start++;
	while (end > start && is_in_set(s1[end -1], set))
		end--;
	new = malloc(sizeof(char ) * (end - start) + 1);
	if (!new)
		return (NULL);
	while (i < end - start)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*int main ()
{
	char *str = "-*-aloha-**-";
	char *set = "*-";
	char *final;

	final = ft_strtrim(str, set);
	printf("%s\n", final);

	free(final);

	return 0;
	
}*/