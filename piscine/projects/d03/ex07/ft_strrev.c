/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:51:54 by nmolina           #+#    #+#             */
/*   Updated: 2017/10/27 23:35:38 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		upper;
	int		lower;
	char	temp;

	lower = 0;
	upper = 0;
	while (str[upper] != '\0')
		upper++;
	while (upper > lower)
	{
		upper--;
		temp = str[upper];
		str[upper] = str[lower];
		str[lower] = temp;
		lower++;
	}
	return (str);
}
