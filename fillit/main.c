/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:35:59 by nmolina           #+#    #+#             */
/*   Updated: 2018/01/04 16:27:07 by ndoorn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_map	map;

	map.count = 0;
	if (argc != 2)
		ft_puterror("usage: ./fillit input_file");
	if (!(scan_file(argv[1], &map) && fillit_try(&map)))
		ft_puterror("error");
	return (0);
}

void	ft_puterror(char *msg)
{
	int		counter;

	counter = 0;
	while (msg[counter])
		counter++;
	write(1, msg, counter);
	write(1, "\n", 1);
	exit(1);
}

int		fillit_try(t_map *map)
{
	int		i;

	map->size = 2;
	while (map->size * map->size < (4 * map->count))
		map->size++;
	while (map->size < MAX)
	{
		i = 0;
		map->z[map->size * map->size] = '\0';
		while (i < map->size * map->size)
			map->z[i++] = '.';
		i = -1;
		if (fillit_go(map, i + 1))
			return (fillit_out(map));
		map->size++;
	}
	return (0);
}

int		fillit_out(t_map *map)
{
	int i;

	i = 0;
	while (i < (map->size * map->size))
	{
		if (i != 0 && i % map->size == 0)
			write(1, "\n", 1);
		write(1, &map->z[i], 1);
		i++;
	}
	write(1, "\n", 2);
	return (1);
}
