/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ligne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:13:45 by lribere           #+#    #+#             */
/*   Updated: 2017/09/09 17:30:03 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i]);
		i++;
}

void	ft_search(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == '.')
			str[i] = 'k';
		i++;
	}
}

int		main(void)
{
	char str0[] = "9 . . . 7 . . . .";
	//char str1[] = "2 . . . 9 . . 5 3";
	//char str2[] = ". 6 . . 1 2 4 . .";
	//char str3[] = "8 4 . . . 1 . 9 .";
	//char str4[] = "5 . . . . . 8 . .";
	//char str5[] = ". 3 1 . . 4 . . .";
	//char str6[] = ". . 3 7 . . 6 8 .";

	ft_putstr(str0);
	ft_search(str0);
	ft_putstr(str0);
	ft_putchar('\n');

	return (0);
}
