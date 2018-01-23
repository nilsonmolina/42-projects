/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:21:43 by husui             #+#    #+#             */
/*   Updated: 2017/12/08 14:27:22 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
