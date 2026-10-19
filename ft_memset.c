/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:08:09 by clpincho          #+#    #+#             */
/*   Updated: 2026/10/19 16:16:44 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		mem[i] = (unsigned char)value;
		i++;
	}
	return (mem);
}
