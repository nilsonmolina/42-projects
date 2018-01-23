/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:56:22 by husui             #+#    #+#             */
/*   Updated: 2017/12/08 15:40:04 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str && ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_putnbr_helper(int value)
{
	if (value > 9)
	{
		ft_putnbr_helper(value / 10);
		ft_putnbr_helper(value % 10);
	}
	else
		ft_putchar(value + '0');
}

void ft_putnbr(int value)
{
	ft_putnbr_helper(value);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int number = ft_atoi(argv[1]);
	int i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(number);
		ft_putstr(" = ");
		ft_putnbr(number * i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
