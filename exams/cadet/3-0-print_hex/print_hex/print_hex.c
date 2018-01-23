/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:53:48 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 10:18:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int number);
int		basic_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(basic_atoi(argv[1]);
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

void	print_hex(int number)
{
	
}
