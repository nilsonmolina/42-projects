/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:02:16 by exam              #+#    #+#             */
/*   Updated: 2017/11/10 19:48:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	pgcd(char *str1, char *str2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	
	printf("%s", "\n");
	return (0);
}

void	pgcd(char *str1, char *str2)
{
	int first = atoi(str1);
	int second = atoi(str2);
	int first_denoms[first];
	int second_denoms[second];
	
	int highest = 1;
	int iterator = 1;
	int index = 0;
	while (iterator <= first)
	{
		if ((first % iterator) == 0)
		{
			first_denoms[index] = iterator;
			index++;
		}
		iterator++;
	}

	iterator = 1;
	index = 0;
	while (iterator <= second)
	{
		if ((second % iterator) == 0)
		{
			second_denoms[index] = iterator;
			index++;
		}
		iterator++;
	}

	index = 0;
	iterator = 0;
	while (first_denoms[iterator] && second_denoms[index])
	{
		if (first_denoms[iterator] == second_denoms[index])
		{
			highest = first_denoms[iterator];
			index++;
			iterator++;
		}
		else if (first_denoms[iterator] > second_denoms[index])
			index++;
		else if (first_denoms[iterator] < second_denoms[index])
			iterator++;
	}
	printf("%d", highest);
}
