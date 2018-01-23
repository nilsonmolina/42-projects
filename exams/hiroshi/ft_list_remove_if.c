#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)())
{
	t_list *prev;
	t_list *iter;
	t_list *next;

	iter = (*begin_list);
	prev = 0;
	while (iter)
	{
		next = iter->next;
		if (!cmp(iter->data, data_ref))
		{
			free(iter);
			if (iter == *begin_list)
				*begin_list = next;
			else
				prev->next = next;
		}
		else
			prev = iter;
		iter = next;
	}
}

// All code after this is for diagnostics, testing purposes.
/*#include <stdio.h>
int cmp(void *a, void *b)
{
	if (*(int *)a == *(int *)b)
		return 0;
	else
		return 1;
}

void print(t_list *list)
{
	while (list)
	{
		printf("%d ", *(int *)(list->data));
		list = list->next;
	}
}

int main()
{
	t_list *test1;
	t_list *test2;
	t_list *test3;
	t_list *test4;
	int *a;
	int *b;
	int *c;
	int *d;
	int *data_ref;

	test1 = malloc(sizeof(t_list));
	test2 = malloc(sizeof(t_list));
	test3 = malloc(sizeof(t_list));
	test4 = malloc(sizeof(t_list));
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	d = malloc(sizeof(int));
	*a = 3;
	*b = 4;
	*c = 5;
	*d = 6;
	test1->data = a;
	test1->next = test2;
	test2->data = b;
	test2->next = test3;
	test3->data = c;
	test3->next = test4;
	test4->data = d;
	test4->next = 0;

	data_ref = malloc(sizeof(int));
	*data_ref = 3;
	ft_list_remove_if(&test1, data_ref, cmp);
	*data_ref = 4;
	ft_list_remove_if(&test1, data_ref, cmp);
	*data_ref = 6;
	ft_list_remove_if(&test1, data_ref, cmp);
	print(test1);
}*/
