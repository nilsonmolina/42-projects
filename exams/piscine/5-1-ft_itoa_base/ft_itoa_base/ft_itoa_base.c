/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:47:41 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 15:12:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char *str;
	unsigned int nb = 0;
	unsigned int power = 1;
	int index = 0;
	int size = 1;
	int sign = 1;

	if (value < 0)
	{
		sign = -1;
		if (base == 10)
			index++;
	}
	nb = value * sign;
	if (base < 9)
	{
		while (power * base <= nb && power * base <= 2147483647)
		{
			power *= base;
			size++;
		}
	} 
	else
	{
		while (power * base <= nb && power * base <= 1000000000)
		{
			power *= base;
			size++;
		}
	}
	str = malloc(sizeof(str) * (index + size + 1));
	if (index)
		str[0] = '-';
	while (power > 0)
	{
		str[index] = (nb / power) + (nb / power > 9 ? 'A' - 10 : '0');
		nb = nb % power;
		power = power / base;
		index++;
	}
	str[index] = '\0';
	return (str);
}
