#include "list.h"
// Testing purposes.
/*#include <stdio.h>
#include <stdlib.h>*/


// Testing purposes, comparing function cmp.
/*int ascending(int a, int b)
{
	return (a <= b);
}*/

int list_is_sorted(t_list *lst, int (*cmp)(int, int))
{
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
			return 0;
		lst = lst->next;
	}
	return 1;
}

void recurse_through(t_list *lst, int (*cmp)(int, int))
{
	int value_a;
	int value_b;

	if (!lst->next)
		return ;
	value_a = lst->data;
	value_b = lst->next->data;
	if (!cmp(value_a, value_b))
	{
		lst->data = value_b;
		lst->next->data = value_a;
	}
	recurse_through(lst->next, cmp);
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	if (!lst)
		return 0;
	if (!lst->next)
		return lst;
	while (!list_is_sorted(lst, cmp))
		recurse_through(lst, cmp);
	return lst;
}

// Testing purposes, helps visualize.
/*void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}*/

// Testing purposes.
/*int main()
{
	t_list *new1;
	t_list *new2;
	t_list *new3;
	t_list *new4;
	t_list *new5;

	new1 = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	new3 = malloc(sizeof(t_list));
	new4 = malloc(sizeof(t_list));
	new5 = malloc(sizeof(t_list));
	new1->data = 1111;
	new1->next = new2;
	new2->data = 2222;
	new2->next = new3;
	new3->data = 3333;
	new3->next = new4;
	new4->data = 2;
	new4->next = new5;
	new5->data = 1;
	new5-> next = 0;
	sort_list(new1, ascending);
	print_list(new1);
}*/
