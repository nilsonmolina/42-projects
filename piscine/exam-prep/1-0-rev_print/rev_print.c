/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:45:08 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/15 19:04:44 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	rev_print(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	index--;
	while (index >= 0)
		write(1, &str[index--], 1);
}
