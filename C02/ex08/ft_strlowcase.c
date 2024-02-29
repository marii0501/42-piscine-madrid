/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:26:47 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 01:35:05 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			str[cont] += 32;
		}
		cont++;
	}
	return (str);
}
/*
int main(void)
{

	char str[23] = "RAZERKRAKENKITTY";
	ft_strlowcase(str);
		 write(1, &str, 18);
		 write(1, "\n", 1);
	 return(0);
}*/
