/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 20:46:38 by exam              #+#    #+#             */
/*   Updated: 2017/11/03 21:40:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *range;
	int s = start;
	int e = end;
	int size;
	int index;
	if (s < 0 || e < 0)
	{
		if (s < 0)
			s *= -1;
		if (e < 0)
			e *= -1;
		size = e + s;
	}
	else
		size = e - s;
	range = malloc(sizeof(int) * (size) + 1);
	index = 0;
	if (start > end)
	{
		while (end <= start)
		{
			range[index] = start;
			index++;
			start--;
		}
	}
	else
	{
		while (start <= end)
		{
			range[index] = start;
			index++;
			start++;
		}
	}
	range[index] = 0;
	return (range);
}
