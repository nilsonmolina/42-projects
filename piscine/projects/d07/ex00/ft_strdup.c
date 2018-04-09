/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:01:04 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 00:12:00 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		index;
	char	*copy;

	size = 0;
	index = 0;
	while (src[size] != '\0')
		size++;
	copy = malloc(size + 1);
	if (copy == NULL)
		return (NULL);
	while (src[index] != '\0')
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
