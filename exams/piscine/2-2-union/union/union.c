/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:45:19 by exam              #+#    #+#             */
/*   Updated: 2017/11/03 20:40:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_union(char **argv);
int		get_len(char *str);
void	add_singles(char *dest, char *src);
void	print_arr(char *str);

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else 
		ft_union(argv);
	return (0);
}

void	ft_union(char **argv)
{
	int length = get_len(argv[1]) + get_len(argv[2]);
	char str[length];

	str[0] = '\0';
	add_singles(str, argv[1]);
	add_singles(str, argv[2]);
	print_arr(str);
}

void	print_arr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

void	add_singles(char *dest, char *src)
{
	int s_index;
	int d_index;
	int loop;
	int found;

	s_index = 0;
	d_index = 0;
	while (dest[d_index] != '\0')
		d_index++;
	while (src[s_index] != '\0')
	{
		found = 0;
		loop = 0;
		while(dest[loop] != '\0')
		{
			if (src[s_index] == dest[loop])
				found = 1;
			loop++;
		}
		if (found == 0)
		{
			dest[d_index] = src[s_index];
			d_index++;
			dest[d_index + 1] = '\0';
		}
		s_index++;
	}
}

int		get_len(char *str)
{
	int index = 0;
	while (str[index] != '\0')
		index++;
	return (index + 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
