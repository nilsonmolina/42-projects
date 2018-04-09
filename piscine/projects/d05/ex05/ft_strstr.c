/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:13:56 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/30 23:46:19 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int str_index;
	int find_index;
	int spot;

	str_index = 0;
	spot = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[str_index] != '\0')
	{
		find_index = 0;
		while (str[str_index + find_index] == to_find[find_index])
		{
			if (find_index == 0)
				spot = str_index;
			find_index++;
		}
		if (to_find[find_index] == '\0')
			return (str + spot);
		str_index++;
	}
	return (0);
}
