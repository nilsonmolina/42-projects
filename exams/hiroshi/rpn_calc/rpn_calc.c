// Written by unknown author.

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_rpn
{
	int		data;
	int		type;
	struct s_rpn	*next;
	struct s_rpn	*prev;
}			t_rpn;

void	print_dlist(t_rpn *lst)
{
	while (lst && lst->prev)
		lst = lst->prev;
	while (lst)
	{
		if (lst->type)
			printf("%d ", lst->data);
		else
			printf("%c ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int	dlstcount(t_rpn *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (-1);
	while (lst->prev)
		lst = lst->prev;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	while (str && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

int	isnum(char *str)
{
	if (!str)
		return (1);
	while (*str && ft_strchr(" \t",*str))
		str++;
	if (*str)
	{
		if (*str == '-')
			str++;
		if (!*str || (*str && !ft_strchr("0123456789", *str)))
			return (2);
		while (*str && ft_strchr("0123456789", *str))
			str++;
		if (*str && !ft_strchr(" \t", *str))
			return (3);
	}
	return (0);
}

int	isop(char *str)
{
	if (!str)
		return (1);
	while (*str && ft_strchr(" \t",*str))
		str++;
	if (*str && ft_strchr("*/%+-", *str)
		&& (ft_strchr(" \t", *(str + 1)) || !*(str + 1)))
		return (0);
	else
		return (2);
}

char	*go_foward(char *str)
{
	if (!str)
		return (NULL);
	while (*str && ft_strchr(" \t", *str))
		str++;
	if (!isop(str))
	{
		if (*str && ft_strchr("*/%+-", *str))
			return (++str);
	}
	else if (!isnum(str))
	{
		if (*str == '-')
			str++;
		while (*str && ft_strchr("0123456789", *str))
			str++;	
		return (str);
	}
	return (NULL);
}

void	add_dlist(t_rpn **lst, char *str)
{
	t_rpn	*new;
	t_rpn	*tmp;

	if (!str || !lst)
		return ;
	if (isnum(str) && isop(str))
		return ;
	if (!(new = (t_rpn*)malloc(sizeof(*new))))
		return ;
	new->next = NULL;
	new->prev = NULL;
	if (!isnum(str))
	{
		new->data = atoi(str);
		new->type = 1;
	}
	else if (!isop(str))
	{
		while (*str && ft_strchr(" \t", *str))
			str++;
		new->data = *str;
		new->type = 0;
	}
	if (!*lst)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}

void	get_data(t_rpn **lst, char *str)
{
	while (*str)
	{
		add_dlist(lst, str);
		str = go_foward(str);
	}	
}

int	check(t_rpn *lst)
{
	if (!lst)
		return (1);
	while (lst->prev)
		lst = lst->prev;
	while (lst)
	{
		if (!lst->type && lst->prev && lst->prev->type
			&& lst->prev->prev && lst->prev->prev->type)
			return (0);
		lst = lst->next;
	}
	return (2);
}

int	do_op_2(t_rpn *lst)
{
	if (!lst)
		return (0);
	if ((char)lst->data == '+')
		return (lst->prev->data + lst->prev->prev->data);
	else if ((char)lst->data == '-')
		return (lst->prev->prev->data - lst->prev->data);
	else if ((char)lst->data == '*')
		return (lst->prev->data * lst->prev->prev->data);
	else if ((char)lst->data == '/')
		return (lst->prev->prev->data / lst->prev->data);
	else if ((char)lst->data == '%')
		return (lst->prev->prev->data % lst->prev->data);
	return (0);
}

int	do_op(t_rpn **lst)
{
	t_rpn	*tmp;

	if (!lst)
		return (1);
	while (*lst && (*lst)->type)
		*lst = (*lst)->next;
	if (!(*lst)->type && ft_strchr("/%", (*lst)->data))
	{
		if ((*lst)->prev && (*lst)->prev->type
			&& !(*lst)->prev->data)
			return (2);
	}
	if (*lst && !(*lst)->type && (*lst)->prev && (*lst)->prev->type
		&& (*lst)->prev->prev && (*lst)->prev->prev->type)
	{
		(*lst)->type = 1;
		(*lst)->data = do_op_2(*lst);
		tmp = (*lst)->prev->prev->prev;
		(*lst)->prev = tmp;
		if (tmp)
			tmp->next = (*lst);
	}
	return (0);
}

int	check_data(t_rpn *lst)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (lst)
	{
		if (lst->type)
			a++;
		else
			b++;
		lst = lst->next;
	}
	a--;
	if (a != b)
		return (1);
	return (0);
}

int	rpn_calc(t_rpn **lst, char *str)
{
	int	ret;

	ret = 0;
	if (!str)
		return (1);
	get_data(lst, str);
	if (check_data(*lst))
		return (2);
	while (!check(*lst) && !ret)
		ret = do_op(lst);
	if ((ret = dlstcount(*lst)) != 1)
		return (ret);
	return (0);
}
	

int	main(int ac, char **av)
{
	t_rpn	*lst;
	int	ret;

	lst = NULL;
	if (ac != 2)
	{
		printf("Error\n");
		return (-1);
	}
	if ((ret = rpn_calc(&lst, av[1])))
	{
		printf("Error\n");
		return (ret);
	}
	printf("%d\n",lst->data);
	return (0);
}
