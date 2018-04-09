/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:52:16 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/01 16:26:27 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_rev_params(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_print_params(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
