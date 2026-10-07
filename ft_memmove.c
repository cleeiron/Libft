/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmemmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:57:10 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/06 21:44:12 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
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