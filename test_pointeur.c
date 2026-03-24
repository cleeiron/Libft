/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_pointeur.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 23:55:50 by cleiron           #+#    #+#             */
/*   Updated: 2026/03/17 15:44:41 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


void	change_values(int *a, int *b)
{
	*a = *a + 1;
	*b = *b + 2;
}

int main(void)
{
	int x = 5;
	int y = 8;

	change_values(&x, &y);

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return (0);
}

#include <stdio.h>

void	swap(int *a, int *b)
{
	int *p = 

	*a = *p;
	*a = *b;
	*p = *b;
}

int main(void)
{
	int x = 3;
	int y = 7;

	swap(&x, &y);

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return (0);
}

#include <stdio.h>

void	set_zero(int **p)
{
	**p = *p = 0;
}

int main(void)
{
	int x = 9;
	int *ptr = &x;

	set_zero(&ptr);

	printf("x = %d\n", x);

	return (0);
}