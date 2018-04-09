/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 00:38:32 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 14:26:59 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(int argc, char **argv);
void	concat(int argc, char **argv, char *arr);

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*arr;

	size = get_size(argc, argv);
	arr = malloc(sizeof(char) * (size + (argc - 2) + 1));
	concat(argc, argv, arr);
	return (arr);
}

int		get_size(int argc, char **argv)
{
	int		arg_index;
	int		char_index;
	int		size;

	arg_index = 1;
	char_index = 0;
	size = 0;
	while (arg_index < argc)
	{
		while (argv[arg_index][char_index] != '\0')
		{
			size++;
			char_index++;
		}
		arg_index++;
		char_index = 0;
	}
	return (size);
}

void	concat(int argc, char **argv, char *arr)
{
	int arg_index;
	int char_index;
	int index;

	arg_index = 1;
	char_index = 0;
	index = 0;
	while (arg_index < argc)
	{
		while (argv[arg_index][char_index] != '\0')
		{
			arr[index] = argv[arg_index][char_index];
			index++;
			char_index++;
		}
		arg_index++;
		char_index = 0;
		arr[index] = '\n';
		index++;
	}
	arr[index - 1] = '\0';
}
