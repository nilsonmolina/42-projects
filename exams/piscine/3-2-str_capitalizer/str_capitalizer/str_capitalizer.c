/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 21:46:13 by exam              #+#    #+#             */
/*   Updated: 2017/11/03 21:58:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define IS_SPACE(x) ((x) == ' ' || (x) == '\t')
#define IS_UPPER(x) (((x) >= 65 && (x) <= 90))
#define IS_LOWER(x) ((x) >= 97 && (x) <= 122)

int		main(int argc, char **argv)
{
	int word = 1;
	int character;

	while (argv[word] != '\0')
	{
		character = 0;
		while (argv[word][character] != '\0')
		{
			if (IS_LOWER(argv[word][character]) && IS_SPACE(argv[word][character - 1]))
				argv[word][character] - 32;
			else if (IS_UPPER(argv[word][character] && !IS_SPACE(argv[word][character -1])))
				argv[word][character] + 32;
			character++;
		}
		word++;
	}
	return (0);
}
