/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 22:08:30 by husui             #+#    #+#             */
/*   Updated: 2017/12/09 22:13:24 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
	int maximum;
	int *iter;

	iter = tab;
	if (!len)
		return (0);
	maximum = *iter;
	iter++;
	len--;
	while (len--)
	{
		if (*iter > maximum)
			maximum = *iter;
		iter++;
	}
	return (maximum);
}
