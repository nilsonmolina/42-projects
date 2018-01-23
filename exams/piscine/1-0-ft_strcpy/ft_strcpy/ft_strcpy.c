/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:27:32 by exam              #+#    #+#             */
/*   Updated: 2017/11/10 18:44:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	if (s1[index])
		s1[index] = '\0';
	return (s1);
}