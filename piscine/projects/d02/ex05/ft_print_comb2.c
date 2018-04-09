/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 11:31:35 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/26 21:19:50 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = -1;
	while (++left <= 99)
	{
		right = left;
		while (++right <= 99)
		{
			ft_putchar((char)left / 10 + '0');
			ft_putchar((char)left % 10 + '0');
			ft_putchar(' ');
			ft_putchar((char)right / 10 + '0');
			ft_putchar((char)right % 10 + '0');
			if (left != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
