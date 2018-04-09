/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 15:27:00 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/03 15:32:09 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int index;
	int max;

	index = 0;
	max = 0;
	while (index < length)
	{
		if (tab[index] > max)
			max = tab[index];
		index++;
	}
	return (max);
}
