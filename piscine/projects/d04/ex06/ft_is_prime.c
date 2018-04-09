/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:54:29 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/28 20:34:06 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		prev_sqrt(int nb)
{
	int sqr;

	sqr = 0;
	if (nb > 46340 * 46340)
		return (0);
	while (sqr * sqr < nb)
		sqr++;
	if (sqr * sqr == nb)
		return (sqr);
	else
		return (sqr - 1);
}

int		ft_is_prime(int nb)
{
	int num;

	if (nb < 2)
		return (0);
	num = prev_sqrt(nb);
	while (num > 1)
	{
		if (nb % num == 0)
			return (0);
		num--;
	}
	return (1);
}
