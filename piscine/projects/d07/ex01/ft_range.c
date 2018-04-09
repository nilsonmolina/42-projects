/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:09:00 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 09:26:52 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int index;
	int *range;

	index = 0;
	if (min >= max)
		return (0);
	size = max - min;
	range = malloc(sizeof(int) * (size + 1));
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	range[index] = 0;
	return (range);
}
