/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 21:59:51 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/26 01:45:13 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char hundreds;
	char tens;
	char ones;

	hundreds = '0' - 1;
	while (hundreds < '7')
	{
		tens = ++hundreds;
		while (tens < '8')
		{
			ones = ++tens;
			while (ones < '9')
			{
				ones++;
				ft_putchar(hundreds);
				ft_putchar(tens);
				ft_putchar(ones);
				if (!(hundreds == '7' && tens == '8' && ones == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
