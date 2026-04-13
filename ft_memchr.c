/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:10:40 by cleiron           #+#    #+#             */
/*   Updated: 2026/04/13 19:53:40 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memchr(const void *src, int c, size_t n)
{
    size_t i = 0;

    const unsigned char *s;
    s = (const unsigned char *)src;

    if(!src)
        return NULL;

    while(i < n)
    {
        if(s[i] == (unsigned char)c)
            return (void *)&s[i];
        i++;
    }
    return NULL;
}

int main()
{
    int tab [] = { 6, 2, 4, 1};

    void *res = ft_memchr(tab, 4, sizeof(tab));

    printf("%p\n", res);

    return 0;
}