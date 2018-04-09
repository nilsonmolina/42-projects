/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 23:05:57 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/07 23:16:22 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		counter;

	counter = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		counter++;
	}
	return (counter);
}
