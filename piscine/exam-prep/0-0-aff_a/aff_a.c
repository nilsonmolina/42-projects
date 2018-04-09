/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:44:44 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/16 20:02:46 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
		aff_a(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	aff_a(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] == 'a')
		{
			write(1, "a", 1);
			return ;
		}
		index++;
	}
}
