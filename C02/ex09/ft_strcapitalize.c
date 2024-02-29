/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 01:36:09 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 02:23:31 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
