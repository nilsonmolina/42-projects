/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 00:17:55 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/28 13:06:34 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0 | nb == 1)
		return (1);
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
