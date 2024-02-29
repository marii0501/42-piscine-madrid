/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:10:11 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/02/25 23:36:25 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstring(char *str);
void ft_putchar(char c);
void ft_openread(char *argv);
void ft_openread2(char *dictionary, char *argv);

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstring("Insert number");
		return (1);
	}
	else if (argc == 2 || argc == 3)
	{
		ft_openread(argv[1]);
	}
	else
	{
		ft_putstring("ERROR");
		return (1);
	}
	return (0);
}
