/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmemset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:08:09 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/06 15:22:38 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
	unsigned char *mem;
	size_t i = 0;
	
	mem =(unsigned char *)s;

	while(i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return mem;
}
