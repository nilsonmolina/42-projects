/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 10:46:35 by husui             #+#    #+#             */
/*   Updated: 2017/12/10 10:38:17 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int number_of_digits(int nbr, int base)
{
	int count;

	count = 0;
	while (nbr)
	{
		nbr /= base;
		count++;
	}
	return (count);
}

char *ft_itoa(int nbr)
{
	char *new;
	char *array = "0123456789ABCDEF";
	int digit_count;
	int modulus;
	int i;
	int base = 10;
	int negative_flag;

	if (nbr == 0)
	{
		new = malloc(sizeof(char) * 2);
		new[0] = '0';
		new[1] = '\0';
		return (new);
	}
	if (nbr == -2147483648)
		return "-2147483648";
	digit_count = number_of_digits(nbr, base);
	i = 0;
	negative_flag = 0;
	if (nbr < 0 && base != 10)
		nbr = -nbr;
	if (nbr < 0 && base == 10)
	{
		digit_count++;
		new = malloc(sizeof(char) * digit_count + 1);
		new[i] = '-';
		nbr = -nbr;
		negative_flag = 1;
		i++;
	}
	else
		new = malloc(sizeof(char) * digit_count + 1);
	new[digit_count] = '\0';
	digit_count--;
	while (digit_count >= 0)
	{
		modulus = nbr % base;
		nbr /= base;
		new[digit_count] = array[modulus];
		digit_count--;
		i++;
	}
	if (negative_flag)
		new[0] = '-';
	return (new);
}

/*
int main()
{
	printf("%s", ft_itoa(-11791713, 10)); // One of the official test cases.
}*/
