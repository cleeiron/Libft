/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmemcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:24:03 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/06 15:33:14 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
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