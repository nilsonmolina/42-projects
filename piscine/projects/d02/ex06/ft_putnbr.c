/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:45:56 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/26 20:11:24 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int reverse;

	reverse = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb != 0)
	{
		reverse = (reverse * 10) + (nb % 10);
		nb /= 10;
	}
	while (reverse != 0)
	{
		ft_putchar((reverse % 10) + '0');
		reverse /= 10;
	}
}
