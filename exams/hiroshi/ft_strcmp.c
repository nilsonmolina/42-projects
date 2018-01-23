/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 00:14:39 by husui             #+#    #+#             */
/*   Updated: 2017/11/09 11:40:00 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int strcmp(const char *s1, const char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*
int main()
{
	char *test1;
	char *test2;

	test1 = "TESTTT";
	test2 = "TESTTT";
	printf("Real strcmp: %i\n", strcmp(test1, test2));
	printf("Our strcmp: %i\n", ft_strcmp(test1, test2));
}
*/
