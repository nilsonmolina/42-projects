/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 15:43:06 by nmolina           #+#    #+#             */
/*   Updated: 2017/12/14 15:49:40 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	terminator(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
		terminator(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	terminator(char *str)
{
	int i;

	i=0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
