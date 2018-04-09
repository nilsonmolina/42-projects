/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:46:32 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/31 13:34:50 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	if (s1[index] != '\0' || s2[index] != '\0')
	{
		while (s1[index] == s2[index])
		{
			if (s1[index] == '\0' && s2[index] == '\0')
				return (0);
			index++;
		}
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}
