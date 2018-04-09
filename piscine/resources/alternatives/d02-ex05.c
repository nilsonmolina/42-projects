/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05-char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 00:03:54 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/26 11:36:16 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_results(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char left_tens;
	char left_ones;
	char right_tens;
	char right_ones;

	left_tens = '0';
	left_ones = '0';
	right_tens = '0';
	right_ones = '0';
	while (!(left_tens == '9' && left_ones == '9'))
	{
		if (left_ones == '9')
		{
			left_tens++;
			left_ones = '0';
		}
		while (!(right_tens == '9' && right_ones == '9'))
		{
			if (right_ones == '9')
			{
				right_tens++;
				right_ones = '0';
			}
			else
			{
				right_ones++;
			}
			ft_print_results(left_tens, left_ones, right_tens, right_ones);
		}
		right_tens = left_tens;
		right_ones = ++left_ones;
	}
}

void	ft_print_results(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}
