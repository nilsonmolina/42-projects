/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:59:53 by nmolina           #+#    #+#             */
/*   Updated: 2017/12/22 22:01:18 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_line(int *hs)
{
	if (hs[0] + 1 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 1 == hs[3])
		return (1);
	if (hs[0] + 4 == hs[1] &&
		hs[1] + 4 == hs[2] &&
		hs[2] + 4 == hs[3])
		return (1);
	return (0);
}

int		is_z(int *hs, int *ds)
{
	if (hs[0] + 1 == hs[1] &&
		hs[1] + 4 == hs[2] &&
		hs[2] + 1 == hs[3])
		return (1);
	if (hs[0] + 3 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 3 == hs[3])
	{
		ds[0] = 1;
		return (1);
	}
	if (hs[0] + 1 == hs[1] &&
		hs[1] + 2 == hs[2] &&
		hs[2] + 1 == hs[3])
	{
		ds[0] = 1;
		return (1);
	}
	if (hs[0] + 4 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 4 == hs[3])
		return (1);
	return (0);
}

int		is_square(int *hs)
{
	if (hs[0] + 1 == hs[1] &&
		hs[1] + 3 == hs[2] &&
		hs[2] + 1 == hs[3])
		return (1);
	return (0);
}

int		is_t(int *hs, int *ds)
{
	if (hs[0] + 4 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 3 == hs[3])
		return (1);
	if (hs[0] + 3 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 4 == hs[3])
	{
		ds[0] = 1;
		return (1);
	}
	if (hs[0] + 3 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 1 == hs[3])
	{
		ds[0] = 1;
		return (1);
	}
	if (hs[0] + 1 == hs[1] &&
		hs[1] + 1 == hs[2] &&
		hs[2] + 3 == hs[3])
		return (1);
	return (0);
}

int		is_l(int *hs, int *ds)
{
	if (hs[0] + 4 == hs[1] && hs[1] + 4 == hs[2] && hs[2] + 1 == hs[3])
		return (1);
	if (hs[0] + 1 == hs[1] && hs[1] + 4 == hs[2] && hs[2] + 4 == hs[3])
		return (1);
	if (hs[0] + 2 == hs[1] && hs[1] + 1 == hs[2] && hs[2] + 1 == hs[3])
	{
		ds[0] = 2;
		return (1);
	}
	if (hs[0] + 1 == hs[1] && hs[1] + 1 == hs[2] && hs[2] + 2 == hs[3])
		return (1);
	if (hs[0] + 4 == hs[1] && hs[1] + 3 == hs[2] && hs[2] + 1 == hs[3])
	{
		ds[0] = 1;
		return (1);
	}
	if (hs[0] + 1 == hs[1] && hs[1] + 3 == hs[2] && hs[2] + 4 == hs[3])
		return (1);
	if (hs[0] + 4 == hs[1] && hs[1] + 1 == hs[2] && hs[2] + 1 == hs[3])
		return (1);
	if (hs[0] + 1 == hs[1] && hs[1] + 1 == hs[2] && hs[2] + 4 == hs[3])
		return (1);
	return (0);
}
