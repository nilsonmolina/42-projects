/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:40:07 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/08 16:05:46 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int counter;

	counter = 0;
	if (begin_list)
	{
		while (counter < nbr)
		{
			if (!(begin_list->next))
				return (0);
			begin_list = begin_list->next;
			counter++;
		}
	}
	return (begin_list);
}
