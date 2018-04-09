/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:24:08 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/08 23:05:47 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *previous;
	t_list *current;
	t_list *temp;

	previous = 0;
	temp = 0;
	current = *begin_list;
	while (current)
	{
		if ((cmp(current->data, data_ref) == 0))
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				previous->next = current->next;
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
