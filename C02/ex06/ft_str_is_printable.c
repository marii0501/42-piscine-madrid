/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:19:55 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 01:29:27 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 32 || str[cont] > 126)
			return (0);
		cont++;
	}
	return (1);
}
/*
int main(void)
{
	int a;
	char ascii;
	
	char str[] = "";
	a = ft_str_is_printable(str);
	ascii = a + '0';
	write(1, &ascii, 1);
}*/
