/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:40:28 by nmolina           #+#    #+#             */
/*   Updated: 2018/01/04 13:36:06 by ndoorn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

int		scan_file(char *file, t_map *map)
{
	int		i;
	t_io	io;
	t_ch	ch;

	i = 0;
	io.fd = open(file, O_RDONLY);
	while (io.fd >= 0 && (io.ret = read(io.fd, io.buf, BUF_SIZE)))
	{
		io.buf[io.ret] = '\0';
		ch.buf = io.buf;
		if (i > 25 || io.ret < BUF_SIZE - 1 || io.ret > BUF_SIZE ||
			!scan_chunk(&ch, &map->tets[i]))
			return (0);
		diff_chunk(&map->tets[i]);
		map->tets[i].c = 'A' + i;
		if (!verify_tetrimino(&map->tets[i]))
			return (0);
		io.last_ret = io.ret;
		i++;
	}
	close(io.fd);
	return (io.last_ret != BUF_SIZE && (map->count = i) > 0);
}

int		scan_chunk(t_ch *ch, t_tet *tet)
{
	int		i;

	ch->x = 0;
	ch->y = 0;
	ch->hash_len = 0;
	i = 0;
	while (ch->buf[i])
	{
		if (!DOT_HASH_ENDL(ch->buf[i]) || ch->hash_len > 4)
			return (0);
		if (ch->buf[i] == '#')
			tet->hashes[ch->hash_len++] = i + 1 - ch->y;
		if (ch->buf[i] == '\n')
		{
			ch->y++;
			if (ch->x != 4 && ch->y != 5)
				return (0);
			ch->x = 0;
		}
		else
			ch->x++;
		i++;
	}
	return (ch->hash_len == 4);
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
