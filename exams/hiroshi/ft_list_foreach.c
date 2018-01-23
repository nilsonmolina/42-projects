/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:42:40 by husui             #+#    #+#             */
/*   Updated: 2017/12/08 15:59:26 by husui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// Testing purposes.
/*void add_4(int *i)
{
	*i = *i + 4;
}*/

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// Testing purposes.
/*#include <stdlib.h>
#include <stdio.h>

int main()
{
	t_list *new;
	t_list *new2;

	int i1 = 3;
	int i2 = 5;
	new = malloc(sizeof(t_list));
	new->data = &i1;
	new2 = malloc(sizeof(t_list));
	new->next = new2;
	new2->data = &i2;
	new2->next = 0;
	ft_list_foreach(new, (void *) add_4);
	printf("%d", (int)(new2->next));
}*/
