/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:34:44 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/08 16:15:04 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	temp = 0;
	while (*begin_list)
	{
		temp = *begin_list;
		*begin_list = temp->next;
		free(temp);
	}
}
