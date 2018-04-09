/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:07:56 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/30 17:38:50 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned number;

	number = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	number = nb;
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}
