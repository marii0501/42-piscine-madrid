/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:30 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 01:26:02 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 97 || str[cont] > 122)
			return (0);
		cont++;
	}
	return (1);
}
/*
int main(void)
{
	int a;
	char ana;

	char str[] = "A";
	a = ft_str_is_lowercase(str);
	ana = a + '0';
	write(1, &ana, 1);
}*/
