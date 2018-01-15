/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 17:57:45 by nmolina           #+#    #+#             */
/*   Updated: 2018/01/04 16:24:23 by ndoorn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fillit_go(t_map *map, int i)
{
	t_tet	*tet;
	int		j;

	if (i == map->count)
		return (1);
	tet = &map->tets[i];
	j = -1;
	while ((j = fillit_look(map, tet, j + 1)) != -1)
	{
		fillit_tet(map, tet, j, OK);
		if (fillit_go(map, i + 1))
			return (1);
		fillit_tet(map, tet, j, !OK);
	}
	return (0);
}

int		fillit_delta_k(t_tet *tet, int i, int map_size)
{
	return (tet->deltas[i] + (i && tet->deltas[i] > 1 ? map_size - 4 : 0));
}

int		fillit_look(t_map *map, t_tet *tet, int j)
{
	t_ok	ok;

	while (j < map->size * map->size)
	{
		ok.i = 0;
		ok.k = 0;
		ok.dk = 0;
		while (ok.i < 4)
		{
			ok.dk = ok.k;
			ok.k += fillit_delta_k(tet, ok.i, map->size);
			ok.dk = ok.k - ok.dk;
			if ((map->z[j + ok.k] != '.') ||
				((map->size == 2 && !is_square(tet->hashes)) ||
				(map->size == 3 && is_line(tet->hashes))) ||
				(map->size == 3 && ok.i && tet->deltas[ok.i] != 2 &&
					ok.dk == 1 && (j + ok.k) % map->size == 0) ||
				((map->size > 3 && ok.dk == 1 && (j + ok.k) % map->size == 0)))
				break ;
			if (++ok.i == 4)
				return (j);
		}
		j++;
	}
	return (-1);
}

void	fillit_tet(t_map *map, t_tet *tet, int j, int ok)
{
	int		i;
	int		k;

	i = -1;
	k = 0;
	while (++i < 4)
	{
		k += tet->deltas[i] + (i && tet->deltas[i] > 1 ? map->size - 4 : 0);
		map->z[j + k] = (ok ? tet->c : '.');
	}
}
