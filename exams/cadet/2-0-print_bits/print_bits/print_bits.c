/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:34:13 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 09:50:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		divisor;

	divisor = 128;
	while (divisor > 0)
	{
		if (octet / divisor > 0)
		{
			write(1, "1", 1);
			octet = octet - divisor;
		}
		else
			write(1, "0", 1);
		divisor = divisor / 2;
	}
}
