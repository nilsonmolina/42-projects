/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:41:11 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/09 21:37:59 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>
#define BUFFER_SIZE 4096

int		main(int argc, char **argv)
{
	int		counter;
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE];

	counter = 1;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	while (counter < argc)
	{
		fd = open(argv[counter], O_RDONLY);
		if (fd == -1)
		{
			counter++;
			continue;
		}
		while ((ret = read(fd, buffer, BUFFER_SIZE)))
			write(1, buffer, ret);
		close(fd);
		counter++;
	}
	return (errno);
}
