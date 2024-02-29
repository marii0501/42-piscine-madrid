/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:12:30 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/29 18:53:48 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a1;
	int	a2;

	if (*to_find == '\0')
		return (str);
	a1 = 0;
	while (str[a1])
	{
		a2 = 0;
		while (to_find[a2] == str[a1 + a2])
		{
			if (to_find[a2 + 1] == '\0')
			{
				return (str + a1);
			}
			a2++;
		}
		a1++;
	}
	return (0);
}
