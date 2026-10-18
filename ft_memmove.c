/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:57:10 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/18 21:29:52 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if(d > s)
	{
		i = n;
		while(i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;	
		}
	}
	return dest;
}