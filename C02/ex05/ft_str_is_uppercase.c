/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:02:06 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 01:27:40 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 65 || str[cont] > 90)
			return (0);
		cont++;
	}
	return (1);
}
/*
int main(void)
{
	int	a;
	char ana;

	char str[] = "A";
	a = ft_str_is_uppercase(str);
	ana = a + '0';
	write(1, &ana, 1);
}*/
