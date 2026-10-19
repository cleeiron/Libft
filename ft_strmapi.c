/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:32:59 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/19 16:43:43 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = malloc(sizeof(char) * (len +1));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*static char test(unsigned int i, char c)
{
	(void)i;
	return (char)ft_toupper(c);
}
*/
/*int main ()
{
    char *result;

    result = ft_strmapi("Bonjour la Libft", test);
    if(!result)
        return 1;
    printf("Le resultat est : %s\n", result);
    free(result);
    return 0;
}*/