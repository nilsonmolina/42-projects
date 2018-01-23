/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:18:33 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 15:24:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	brainfuck(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void	brainfuck(char *str)
{
	str = 0;
	write(1, "Yup, I'm totally brain f*cked!", 30);
}
