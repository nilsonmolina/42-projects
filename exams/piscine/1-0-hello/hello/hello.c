/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:34:23 by exam              #+#    #+#             */
/*   Updated: 2017/10/27 18:40:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeChar(char c);
void	hello(void);

int		main()
{
	hello();
	return (0);
}

void	hello()
{
	writeChar('H');
	writeChar('e');
	writeChar('l');
	writeChar('l');
	writeChar('o');
	writeChar(' ');
	writeChar('W');
	writeChar('o');
	writeChar('r');
	writeChar('l');
	writeChar('d');
	writeChar('!');
	writeChar('\n');
}

void	writeChar(char c)
{
	write(1, &c, 1);
}
