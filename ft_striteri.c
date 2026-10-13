/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clpincho <clpincho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:52:11 by cleiron           #+#    #+#             */
/*   Updated: 2026/10/13 12:44:16 by clpincho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void test(unsigned int i, char *str)
{
    (void)i;
    *str = (char)ft_toupper(*str);
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    
    i = 0;
    if(!s || !f)
        return;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

int main()
{
    char s[] = "Hola";
    ft_striteri(s, test);
    printf("Le resultat est %s\n", s);
    return 0;
    
}