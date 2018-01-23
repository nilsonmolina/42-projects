/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:47:41 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 13:07:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *str;
	unsigned int nb = 0;
	unsigned int power = 1;
	int index = 0;
	int size = 1;
	int sign = 1;

	if (nbr < 0)
	{
		sign = -1;
		index++;
	}
	nb = nbr * sign;
	while (nb >= power * 10)
	{
		power *= 10;
		size++;
	}
	str = malloc(sizeof(str) * (index + size + 1));
	if (index)
		str[0] = '-';
	while (power > 0)
	{
		str[index] = (nb / power) + '0';
		nb = nb % power;
		power = power / 10;
		index++;
	}
	str[index] = '\0';
	return (str);
}
