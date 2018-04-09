/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 23:17:36 by nmolina           #+#    #+#             */
/*   Updated: 2017/11/02 23:32:21 by nmolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int word;
	int character;

	word = 0;
	while (tab[word])
	{
		character = 0;
		while (tab[word][character])
		{
			ft_putchar(tab[word][character]);
			character++;
		}
		ft_putchar('\n');
		word++;
	}
}
