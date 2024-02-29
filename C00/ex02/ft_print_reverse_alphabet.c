/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:34:08 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/14 15:51:35 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	z;
	char	a;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		write (1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
