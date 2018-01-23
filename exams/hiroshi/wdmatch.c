/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 10:41:24 by husui             #+#    #+#             */
/*   Updated: 2018/01/01 10:50:35 by husui            ###   ########.fr       */
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
		ft_putchar(*str++);
}

int main(int argc, char **argv)
{
	char *str1;
	char *str2;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	char *beginning = argv[1];
	str1 = argv[1];
	str2 = argv[2];
	while (*str2)
	{
		if (*str2 == *str1)
			str1++;
		str2++;
	}
	if (!*str1)
	{
		ft_putstr(beginning);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
