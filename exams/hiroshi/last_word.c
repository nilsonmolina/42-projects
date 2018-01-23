/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 23:58:16 by husui             #+#    #+#             */
/*   Updated: 2017/12/18 23:58:17 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int there_are_whitespaces_or_none(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str)
		return 0;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int first_letter_flag = 1;
	int there_are_words_flag = 0;
	int i = 0;
	int j = 0;
	char *str;
	str = argv[1];
	while (*str == ' ' || *str == '\t')
		str++;
	while (str[i])
	{
		first_letter_flag = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (first_letter_flag == 1)
			{
				first_letter_flag = 0;
				j = i;
			}
			there_are_words_flag = 1;
			while (str[i] && !(str[i] == ' ' || str[i] == '\t'))
				i++;
		}
		if (there_are_whitespaces_or_none(&str[i]))
			break;
		i++;
	}
	if (there_are_words_flag)
	{
		while (str[j] && !(str[j] == ' ' || str[j] == '\t'))
		{
			ft_putchar(str[j]);
			j++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return 0;
}
