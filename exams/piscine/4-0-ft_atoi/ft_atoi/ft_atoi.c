/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:23:02 by exam              #+#    #+#             */
/*   Updated: 2017/10/27 21:44:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int size;
	int multiplier;
	int converted;
	int result;

	size = 0;
	multiplier = 1;
	result = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	while (size > 0)
	{
		if (size == 1 && str[size - 1] == '-')
			result *= -1;
		else
			result += (str[size - 1] - '0') * multiplier;
		size--;
		multiplier *= 10;
	}
	return (result);
}
