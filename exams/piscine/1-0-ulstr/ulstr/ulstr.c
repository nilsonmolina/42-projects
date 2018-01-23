/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:44:40 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 10:54:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define IS_UPPER(x) (x >= 65 && x <= 90)
#define IS_LOWER(x) (x >= 97 && x <= 122)

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
	char c;

	index = 0;
	while (str[index])
	{
		if (IS_UPPER(str[index]))
			c = str[index] + 32;
		else if (IS_LOWER(str[index]))
			c = str[index] - 32;
		else
			c = str[index];
		write(1, &c, 1);
		index++;
	}
}
