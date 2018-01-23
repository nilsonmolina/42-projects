/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 18:17:14 by exam              #+#    #+#             */
/*   Updated: 2017/11/03 18:26:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	search_and_replace(char **argv);

int		main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else if (argv[2][1] != '\0' || argv[3][1] != '\0')
		ft_putchar('\n');
	else
		search_and_replace(argv);
	return(0);
}

void	search_and_replace(char **argv)
{
	int index;

	index = 0;
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] == argv[2][0])
			ft_putchar(argv[3][0]);
		else
			ft_putchar(argv[1][index]);
		index++;
	}
	ft_putchar('\n');
}

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
