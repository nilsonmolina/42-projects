/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:39:35 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/15 18:37:06 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	repeat_alpha(char *str)
{
	int index;
	int iterator;

	index = 0;
	iterator = 0;
	while (str[index])
	{
		iterator = 1;
		if (str[index] >= 'a' && str[index] <= 'z')
			iterator = str[index] - 'a' + 1;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			iterator = str[index] - 'A' + 1;
		while (iterator)
		{
			write(1, &str[index], 1);
			iterator--;
		}
		index++;
	}
}
