/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:52:16 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/01 18:51:06 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		strcompare(char *s1, char *s2);
void	ft_print_params(char *str);
void	print_sorted(int argc, char **argv);

int		main(int argc, char **argv)
{
	int		outer;
	int		is_changed;
	char	*ptr;

	is_changed = 1;
	outer = 1;
	ptr = argv[outer];
	while (is_changed == 1)
	{
		is_changed = 0;
		while (outer < argc - 1)
		{
			if (strcompare(argv[outer], argv[outer + 1]) > 0)
			{
				ptr = argv[outer];
				argv[outer] = argv[outer + 1];
				argv[outer + 1] = ptr;
				is_changed = 1;
			}
			outer++;
		}
		outer = 1;
	}
	print_sorted(argc, argv);
	return (0);
}

void	ft_print_params(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	print_sorted(int argc, char **argv)
{
	int		index;

	index = 1;
	while (index < argc)
	{
		ft_print_params(argv[index]);
		ft_putchar('\n');
		index++;
	}
}

int		strcompare(char *s1, char *s2)
{
	int	index;

	index = 0;
	if (s1[index] != '\0' || s2[index] != '\0')
	{
		while (s1[index] == s2[index])
		{
			if (s1[index] == '\0' && s2[index] == '\0')
				return (0);
			index++;
		}
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}
