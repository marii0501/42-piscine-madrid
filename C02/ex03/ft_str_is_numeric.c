/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:56:54 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 05:27:42 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < '0' || str[cont] > '9')
			return (0);
		cont++;
	}
	return (1);
}
/*
int	main(void)
{
	int a;
	char ana;

	char str[] = "1";
	a = ft_str_is_numeric(str);
	ana = a + '0';
	write(1, &ana, 1);
}*/
