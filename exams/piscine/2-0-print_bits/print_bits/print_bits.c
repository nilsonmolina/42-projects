/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:47:28 by exam              #+#    #+#             */
/*   Updated: 2017/11/10 18:55:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int divisor = 128;

	while (divisor >= 1)
	{
		if (octet >= divisor)
		{
			write(1, &"1", 1);
			octet = octet - divisor;
		}
		else
			write(1, &"0", 1);
		divisor = divisor / 2;
	}
}
