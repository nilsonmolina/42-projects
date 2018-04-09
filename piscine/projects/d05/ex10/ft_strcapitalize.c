/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:53:08 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/31 15:51:39 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			if (index == 0 || str[index - 1] == ' ')
				str[index] -= 32;
		}
		else if (str[index] >= 65 && str[index] <= 90)
		{
			if (str[index - 1] != ' ')
				str[index] += 32;
		}
		index++;
	}
	return (str);
}
