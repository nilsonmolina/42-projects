/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:09:00 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 09:30:37 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int index;
	int *temp;

	index = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	temp = malloc(sizeof(int) * (size + 1));
	while (min < max)
	{
		temp[index] = min;
		min++;
		index++;
	}
	temp[index] = 0;
	*range = temp;
	return (size);
}
