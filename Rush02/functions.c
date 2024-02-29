/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:59:52 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/02/24 21:50:06 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
void	openfile(void)
{
	open (*dict, O_RDONLY, );
}
void	argv_characters(char	*arg)
{
	int	size;

	size = sizeof(arg);
	while(*arg)
	{
		//buscar en el diccionario el numero de esa posicion
		//comparar su posicion con el size y buscar en el diccionario
		size--;
	}
	return(0);
}
void	convert_to_int(char	n)
{

