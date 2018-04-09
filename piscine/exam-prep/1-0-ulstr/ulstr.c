/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:29:25 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/15 20:46:50 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	ulstr(char *str)
{
	int index;
	char character;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			character = str[index] - 32;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			character = str[index] + 32;
		else
			character = str[index];
		write(1, &character, 1);
		index++;
	}
}
