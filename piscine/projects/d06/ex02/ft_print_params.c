/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:52:16 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/01 16:23:40 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str);

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		ft_print_params(argv[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}

void	ft_print_params(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
