/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:20:03 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/06 21:27:05 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *arr;

	index = 0;
	arr = malloc(sizeof(*arr) * (length));
	while (index < length)
	{
		arr[index] = f(tab[index]);
		index++;
	}
	return (arr);
}
