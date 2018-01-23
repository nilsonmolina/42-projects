/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:45:01 by exam              #+#    #+#             */
/*   Updated: 2017/10/27 18:53:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putChar(char c);
void	maff_revalpha(void);

int		main()
{
	maff_revalpha();
	return (0);
}

void 	maff_revalpha()
{
	char upper = 'Z';
	char lower = 'z';
	int iterator;

	iterator = 0;
	while(iterator < 26)
	{
		if (iterator % 2 == 0)
			putChar(lower);
		else
			putChar(upper);
		upper--;
		lower--;
		iterator++;
	}
	putChar('\n');
}

void 	putChar(char c)
{
	write(1, &c, 1);
}
