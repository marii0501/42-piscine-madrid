/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:24:39 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 05:15:34 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[5];
	char src[] = "Hola";
printf("%s\n", ft_strcpy(dest, src));
	return 0;
}
int main(void)
{
	char src[] = "Razer Kraken Kitty";
	char dest[20];
	ft_strcpy(dest, src);
	write(1, dest, 20);
	write(1, "\n", 1);
	return 0;
}*/
