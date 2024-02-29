/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:22:04 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/02/25 23:39:11 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	searchnumber (char *dictionary, char *arg)
{
	while (*dictionary)
	{
		if (*dictionary == *arg)
		{
			while (!(*dictionary >= 'a' && *dictionary <= 'z'))
				dictionary++;
			if (*dictionary >= 'a' && *dictionary <= 'z')
			{
				while(*dictionary >= 'a' && *dictionary <= 'z')
				{
					ft_putchar(*dictionary);
					dictionary++;
					return (0);
				}
			}
		}
		dictionary++;
	}
}
