/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:31:04 by exam              #+#    #+#             */
/*   Updated: 2017/11/17 14:02:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb);
int		is_prime(int nb);

int		main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}

void	fprime(int nb)
{
	int divisor;

	if (is_prime(nb))
	{
		printf("%d", nb);
		return ;
	}
	divisor = 2;
	while (divisor < nb)
	{
		if (nb % divisor == 0)
		{
			printf("%d*", divisor);
			nb = nb / divisor;
			divisor = 1;
		}
		divisor++;
	}
	printf("%d", nb);
}

int		is_prime(int nb)
{
	int divisor = 2;
	if (nb > 2)
	{
		while (divisor < nb)
		{
			if (nb % divisor == 0)
				return (0);
			divisor++;
		}
		return (1);
	}
	else if (nb == 2 || nb == 1)
		return (1);
	else
		return (0);

}
