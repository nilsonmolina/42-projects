/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 18:06:28 by exam              #+#    #+#             */
/*   Updated: 2017/11/03 18:12:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c);
void	ft_countdown(void);

int 	main()
{
	ft_countdown();
	return(0);
}

void 	ft_countdown()
{
	char number;

	number = '9';
	while (number >= '0')
	{
		ft_putchar(number);
		number--;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
