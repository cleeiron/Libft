/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:24:03 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/19 16:12:09 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s;
	const unsigned char	*c;
	size_t				i;

	s = (const unsigned char *)s1;
	c = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != c[i])
			return (s[i] - c[i]);
		i++;
	}
	return (0);
}
