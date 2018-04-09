/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:52:28 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/31 16:33:09 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		index;
	char	cur;

	index = 0;
	cur = ' ';
	while (str[index] != '\0')
	{
		cur = str[index];
		if (!(cur >= 'a' && cur <= 'z') && !(cur >= 'A' && cur <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
