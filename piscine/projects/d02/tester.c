/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d02-tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 20:55:48 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/26 23:43:37 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);

int main()
{
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();

	//ft_is_negative(-1);
	//ft_is_negative(0);
	//ft_is_negative(100);
	
	//ft_print_comb();
	ft_print_comb2();

	//ft_putnbr(40000);
	//ft_putchar('\n');
	//ft_putnbr(0);
	//ft_putchar('\n');
	//ft_putnbr(7);
	//ft_putchar('\n');
	//ft_putnbr(-424242);
	//ft_putchar('\n');
	//ft_putnbr(-1);

	return(0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
