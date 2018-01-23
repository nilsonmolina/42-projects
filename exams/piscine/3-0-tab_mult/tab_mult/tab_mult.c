/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:13:18 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 11:44:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h> //please remove

void	tab_mult(int nbr);
int		basic_atoi(char *str);
void	basic_putnbr(int nbr);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(basic_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}

void	tab_mult(int nbr)
{
	int mult = 1;

	while (mult <= 9)
	{
		ft_putchar(mult + '0');
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		basic_putnbr(nbr);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		basic_putnbr(nbr * mult);
		ft_putchar('\n');
		mult++;
	}
}

int		basic_atoi(char *str)
{
	int value;
	int index;

	value = 0;
	index = 0;
	while(str[index])
	{
		value = (value * 10) + (str[index] - '0');
		index++;
	}
	return (value);
}

void	basic_putnbr(int nbr)
{
	if (nbr >= 10)
		basic_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_putchar (char c)
{
	write(1, &c, 1);
}
