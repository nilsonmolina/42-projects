/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 10:13:06 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/29 12:22:03 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_row(int x, int y, int x_index, int y_index);

void	rush(int x, int y)
{
	int x_index;
	int y_index;

	x_index = 1;
	y_index = 1;
	while (y_index <= y)
	{
		print_row(x, y, x_index, y_index);
		y_index++;
	}
}

void	print_row(int x, int y, int x_index, int y_index)
{
	while (x_index <= x)
	{
		if ((y_index == 1 || y_index == y))
		{
			if (x_index == 1 || x_index == x)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else
		{
			if (x_index == 1 | x_index == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		x_index++;
	}
	ft_putchar('\n');
}
