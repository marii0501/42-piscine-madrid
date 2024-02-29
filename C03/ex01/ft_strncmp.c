/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:13:39 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 17:19:43 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ax;

	ax = 0;
	while (ax < n && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		ax++;
	}
	if (ax < n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}
