/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 09:38:30 by husui             #+#    #+#             */
/*   Updated: 2017/12/10 09:52:59 by husui            ###   ########.fr       */
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

int is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	if ('A' <= c && c <= 'Z')
		return 2;
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	int i = 0;
	char *str = argv[1];
	int alpha_code;
	char iter;
	while (*str)
	{
		i = 0;
		alpha_code = is_alpha(*str);
		if (alpha_code)
		{
			iter = *str;
			while ('a' <= iter && alpha_code == 1)
			{
				iter--;
				i++;
			}
			while ('A' <= iter && alpha_code == 2)
			{
				iter--;
				i++;
			}
			while (i--)
				ft_putchar(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
	ft_putstr("\n");
	return (0);
}
