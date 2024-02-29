/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:30:33 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 00:32:13 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "Razer Kraken Kitty";
	char dest[20];

	printf("%s\n", ft_strncpy(dest, src, 20));
	return 0;
}
int main(void)
{
	int n;
	char src[] = "Razer Kraken Kitty";
	char dest[20];

	n = 20;
	ft_strncpy(dest, src, 20);
	write(1, dest, 20);
	write(1, "\n", 1);
	return 0;
}*/
