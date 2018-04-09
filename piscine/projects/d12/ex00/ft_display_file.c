/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:41:11 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/09 21:13:41 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFFER_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buffer, BUFFER_SIZE)))
			write(1, buffer, ret);
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
