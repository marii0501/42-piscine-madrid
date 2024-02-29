/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 05:21:03 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 05:24:58 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (!((str[cont] >= 'A' && str[cont] <= 'Z')
				|| (str[cont] >= 'a' && str[cont] <= 'z')))
			return (0);
		cont++;
	}
	return (1);
}
/*
int main(void)
{
	int	a;
	char a_char;

	char str[] = "a";
	a = ft_str_is_alpha(str);
	a_char = a + '0';
	write(1, &a_char, 1);
}*/
