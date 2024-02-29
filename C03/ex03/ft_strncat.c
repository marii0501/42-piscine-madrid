/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:50:25 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 18:10:29 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a1;
	unsigned int	a2;

	a1 = 0;
	a2 = 0;
	while (dest[a1] != '\0')
		a1++;
	while (src[a2] != '\0' && a2 < nb)
	{
		dest[a1] = src[a2];
		a1++;
		a2++;
	}
	dest[a1] = '\0';
	return (dest);
}
