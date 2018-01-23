/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 10:22:08 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 10:24:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add_prime_sum(int number);
int		basic_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '-')
		add_prime_sum(basic_atoi(argv[1]);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

int		basic_atoi(char *str)
{
	int i;
	int number;

	i = -1;
	number = 0;
	while (str[++i])
		number = (number * 10) + ('0' + str[i]);
	return (number);
}

void	add_prime_sum(int number)
{
	
}
