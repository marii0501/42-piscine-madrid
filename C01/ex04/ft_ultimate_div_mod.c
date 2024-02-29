/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:53:54 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/21 03:31:10 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d \n", a);
	printf("%d \n", b);
}*/
