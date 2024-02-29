/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarmole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:25:38 by jmarmole          #+#    #+#             */
/*   Updated: 2024/02/11 13:50:29 by jmarmole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	char charA = 'A';
	char charB = 'B';
	char charC = 'C';
	int row = 0;
	int col = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar(charA);
			else if (row == 0 || row == y - 1)
				ft_putchar(charB);
			else if (col == 0 || col == x - 1)
				ft_putchar(charC);
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
