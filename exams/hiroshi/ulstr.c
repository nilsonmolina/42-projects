/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:29:07 by husui             #+#    #+#             */
/*   Updated: 2017/12/08 14:46:48 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int islower(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	return 0;
}

int isupper(char c)
{
	if ('A' <= c && c <= 'Z')
		return 1;
	return 0;
}

char lower(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return c;
}

char upper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return c;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	char *str;
	str = argv[1];
	while (*str)
	{
		if (islower(*str))
			ft_putchar(upper(*str));
		else if (isupper(*str))
			ft_putchar(lower(*str));
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
