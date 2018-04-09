/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:34:13 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 22:24:46 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define SEPARATOR(x) ((x) == ' ' || (x) == '\t' || (x) == '\n' || (x) == 0)

int		word_count(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		length;
	int		word;
	int		char_index;

	word = 0;
	arr = malloc(sizeof(arr) * (word_count(str) + 1));
	while (*str != '\0')
	{
		while (SEPARATOR(*str) && *str != '\0')
			str++;
		if (*str == '\0')
			break ;
		length = 0;
		while (!SEPARATOR(str[length]))
			length++;
		arr[word] = malloc(sizeof(char) * (length + 1));
		char_index = 0;
		while (!SEPARATOR(*str))
			arr[word][char_index++] = *str++;
		arr[word][char_index] = '\0';
		word++;
	}
	arr[word] = 0;
	return (arr);
}

int		word_count(char *str)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (!SEPARATOR(str[index]) && SEPARATOR(str[index + 1]))
			count++;
		index++;
	}
	return (count);
}
