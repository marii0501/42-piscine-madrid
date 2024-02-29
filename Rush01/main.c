/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:15 by arojas-r          #+#    #+#             */
/*   Updated: 2024/02/18 16:42:21 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void matrizrush()
{
	int size;
	int row_x;
	int col_y;
	char c;

	c = 'a';
	size = 4;
	row_x = 0;
	col_y = 0;

	while ( row_x < size )
	{
		col_y = 0;
		while (col_y < size)
		{
		write (1, &c, 1);
		col_y++;
		}
		row_x++;
		write(1, "\n", 1);
	}
}
int main() {
	matrizrush();
	return (0);
}
