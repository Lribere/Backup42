/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlux <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 16:28:14 by tlux              #+#    #+#             */
/*   Updated: 2017/09/16 21:04:00 by aetchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printextrem(char a, char b, char c, int x)
{
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(c);
		x--;
	}
	if (x > 1)
		ft_putchar(b);
	ft_putchar('\n');
}

void	ft_printlines(int x, int y, char c)
{
	int savex;

	savex = x;
	while (y > 2)
	{
		ft_putchar(c);
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		x = savex;
		if (x > 1)
			ft_putchar(c);
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	char border1;
	char border2;
	char fill;

	border1 = 'o';
	border2 = 'o';
	fill = '-';
	if (x > 0 && y > 0)
		ft_printextrem(border1, border2, fill, x);
	ft_printlines(x, y, '|');
	if (y > 1)
		ft_printextrem(border2, border1, fill, x);
}
