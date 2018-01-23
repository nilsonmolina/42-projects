/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:41:57 by exam              #+#    #+#             */
/*   Updated: 2017/11/10 22:06:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, &"\n", 1);
	return (0);
}

void	rev_wstr(char *str)
{
	int tail = 0;
	int head = 1;
	int temp = 0;

	while (str[tail])
		tail++;
	head = tail;
	while (head > 0)
	{
		while (head != 0 && str[head] != ' ')
			head--;
		temp = head;
		if (str[head] == ' ')
			head++;
		while (head < tail)
		{
			write(1, &str[head], 1);
			head++;
		}
		if (str[temp] == ' ')
		{
			write(1, &" ", 1);
			temp = temp - 1;
		}
		head = temp;
		tail = temp + 1;
	}
}
