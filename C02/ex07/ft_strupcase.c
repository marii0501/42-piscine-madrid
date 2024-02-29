/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:47:01 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 01:30:58 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			str[cont] -= 32;
		}
		cont++;
	}
	return (str);
}
/*
int main(void)
{
	char str[23] = "razer kraken kitty";
	ft_strupcase(str);
	write(1, &str, 18);
	write(1, "\n", 1);
	return(0);
}*/
