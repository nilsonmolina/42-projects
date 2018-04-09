/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:44:33 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/16 18:06:38 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char find, char replace);

int		main(int argc, char **argv)
{
	if (argc == 4 && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}

void	search_and_replace(char *str, char find, char replace)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] == find)
			write(1, &replace, 1);
		else
			write(1, &str[index], 1);
		index++;
	}
}
