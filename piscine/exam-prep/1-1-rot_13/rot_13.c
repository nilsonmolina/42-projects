/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:47:44 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/15 23:43:23 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define IS_LETTER(x) ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))

void	rot_13(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	rot_13(char *str)
{
	int index;
	char c;

	index = 0;
	while (str[index])
	{
		if (IS_LETTER(str[index]))
		{
			if (str[index] <= 'M' || (str[index] <= 'm' && str[index] >= 'a'))
				c = str[index] + 13;
			else
				c = str[index] - 13;
		}
		else
			c = str[index];
		write(1, &c, 1);
		index++;
	}
}
