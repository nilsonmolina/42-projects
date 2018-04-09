/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:39:24 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/31 17:39:01 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
