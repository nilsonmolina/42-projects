/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 12:22:15 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/29 18:59:33 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_row(int width, char start, char mid, char end);

void	rush(int x, int y)
{
	int y_counter;

	y_counter = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y_counter <= y)
	{
		if (y_counter == 1)
			print_row(x, '/', '*', '\\');
		else if (y_counter == y)
			print_row(x, '\\', '*', '/');
		else
			print_row(x, '*', ' ', '*');
		y_counter++;
	}
}

void	print_row(int width, char start, char mid, char end)
{
	int x_counter;

	x_counter = 1;
	if (width < 1)
		return ;
	ft_putchar(start);
	while (++x_counter < width)
		ft_putchar(mid);
	if (width != 1)
		ft_putchar(end);
	ft_putchar('\n');
}
