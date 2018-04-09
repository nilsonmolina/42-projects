/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:46:32 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/31 13:32:49 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (s1[index] != '\0' || s2[index] != '\0')
	{
		while (s1[index] == s2[index] && index < n)
		{
			if (s1[index] == '\0' || s2[index] == '\0')
				return (0);
			index++;
		}
		if (index != n)
			return (s1[index] - s2[index]);
	}
	return (0);
}
