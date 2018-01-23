/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 22:18:02 by husui             #+#    #+#             */
/*   Updated: 2017/12/09 22:32:06 by husui            ###   ########.fr       */
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

int there_are_only_whitespaces_or_none(char *str)
{
	while (*str)
	{
		if (!(*str == ' ' || *str == '\t' || *str == '\0'))
			return (0);
		str++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	char *str;
	str = argv[1];
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && !there_are_only_whitespaces_or_none(str))
	{
		while (*str == ' ' || *str == '\t')
			str++;
		while (*str && !(*str == ' ' || *str == '\t'))
		{
			ft_putchar(*str);
			str++;
		}
		if (!there_are_only_whitespaces_or_none(str))
			ft_putstr("   ");
		if (*str)
			str++;
	}
	ft_putchar('\n');
	return (0);
}
