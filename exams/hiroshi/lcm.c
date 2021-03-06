/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 10:53:59 by husui             #+#    #+#             */
/*   Updated: 2018/01/01 11:03:51 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
	int i = 2;

	if (a == 0 || b == 0)
		return (0);
	if (a == 1 || b == 1)
		return (1);
	while (i % a!= 0 || i % b != 0)
		i++;
	return (i);
}
