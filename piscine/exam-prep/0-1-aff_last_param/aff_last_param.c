/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:51:16 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/15 12:55:37 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index])
		write(1, &str[index++], 1);
}
