/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:40:28 by nmolina           #+#    #+#             */
/*   Updated: 2018/01/03 20:39:55 by ndoorn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

int		scan_file(char *file, t_map *map)
{
	int		i;
	t_io	io;

	i = 0;
	io.fd = open(file, O_RDONLY);
	if (io.fd == -1)
		return (0);
	while ((io.ret = read(io.fd, io.buffer, BUF_SIZE)))
	{
		io.buffer[io.ret] = '\0';
		if (i > 25 || io.ret < BUF_SIZE - 1 || io.ret > BUF_SIZE ||
			!scan_chunk(io.buffer, &map->tets[i]))
			return (0);
		diff_chunk(&map->tets[i]);
		map->tets[i].c = 'A' + i;
		if (!verify_tetrimino(&map->tets[i]))
			return (0);
		io.last_ret = io.ret;
		i++;
	}
	if (io.last_ret == BUF_SIZE || i == 0)
		return (0);
	close(io.fd);
	map->count = i;
	return (1);
}

int		scan_chunk(char *chunk, t_tet *tet)
{
	COUNTER_VARS;
	while (chunk[i])
	{
		if (!(IS_VALID_CHAR(chunk[i])))
			return (0);
		if (chunk[i] == '#')
			tet->hashes[tiles++] = i + 1 - y;
		if (chunk[i] == '#' && tiles > 4)
			return (0);
		if (chunk[i] == '\n')
		{
			y++;
			if (x != 4 && y != 5)
				return (0);
			x = 0;
		}
		else
			x++;
		i++;
	}
	if (tiles != 4)
		return (0);
	return (1);
}

void	diff_chunk(t_tet *tet)
{
	int		i;

	tet->deltas[0] = 0;
	i = 0;
	while (++i < 4)
		tet->deltas[i] = tet->hashes[i] - tet->hashes[i - 1];
}

int		verify_tetrimino(t_tet *tet)
{
	return (check_edge(tet->hashes) &&
		(is_square(tet->hashes) ||
		is_line(tet->hashes) ||
		is_l(tet->hashes, tet->deltas) ||
		is_z(tet->hashes, tet->deltas) ||
		is_t(tet->hashes, tet->deltas)));
}

int		check_edge(int *hs)
{
	if ((hs[0] + 1 == hs[1] && hs[0] % 4 == 0) ||
		(hs[1] + 1 == hs[2] && hs[1] % 4 == 0) ||
		(hs[2] + 1 == hs[3] && hs[2] % 4 == 0))
		return (0);
	return (1);
}
