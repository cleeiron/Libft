/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:24:03 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/18 21:31:08 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s;
	const unsigned char *c;
	
	s = (const unsigned char *)s1;
	c = (const unsigned char *)s2;
	
	size_t i = 0;

	while(i < n)
	{
		if(s[i] != c[i])
			return s[i] - c[i];
		i++;
	}
	return 0;
	
}