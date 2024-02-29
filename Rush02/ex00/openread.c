/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesa-ke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:15:02 by vmesa-ke          #+#    #+#             */
/*   Updated: 2024/02/25 23:38:29 by vmesa-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putstring(char *str);
void searchnumber(char *dictionary, char *argv);

void	ft_openread(char *argv)
{
	int		fd;
	char	buf[1000];
	ssize_t	nr_bytes;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstring("ERROR");
	}
	else
	{
		nr_bytes = read(fd, buf, 1000);
		if (nr_bytes == 0)
		{
			ft_putstring("Empty file");
		}
		else
		{
			searchnumber(buf, argv);
		}
	}
	close(fd);
}
