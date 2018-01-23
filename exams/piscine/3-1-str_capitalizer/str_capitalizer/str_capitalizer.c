/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:55:43 by exam              #+#    #+#             */
/*   Updated: 2017/11/10 20:38:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DELIM(x) x == '\t' || x == '\n' || x == ' ' || x == '\0'
#define UPPER(x) x >= 'A' && x <= 'Z'
#define LOWER(x) x >= 'a' && x <= 'z'

void	str_capitalizer(char **argv);

int		main(int argc, char **argv)
{
	if (argc > 1)
		str_capitalizer(argv + 1);
	else
		write(1, &"\n", 1);
	return (0);
}

void	str_capitalizer(char **argv)
{
	int word = 0;
	int chr = 0;
	while (argv[word])
	{
		chr = 0;
		while (argv[word][chr])
		{
			if (LOWER(argv[word][chr]) && (chr == 0 || DELIM(argv[word][chr - 1])))
				argv[word][chr] -= 32;
			else if (UPPER(argv[word][chr]) && !(chr == 0 || DELIM(argv[word][chr - 1])))
				argv[word][chr] += 32;
			write(1, &argv[word][chr], 1);
			chr++;
		}
		write(1, &"\n", 1);
		word++;
	}
}
