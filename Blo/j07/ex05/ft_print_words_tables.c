/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:35:25 by lribere           #+#    #+#             */
/*   Updated: 2017/09/20 12:05:00 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    **ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int main()
{
	char *str = "   Je 			suis \n Multimilliardaire";
	char **tab;

	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
	return (0);
}
