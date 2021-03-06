/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 15:24:10 by lribere           #+#    #+#             */
/*   Updated: 2017/09/03 18:40:34 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_affichage(char a, char b, char c, char d)
{
	if ((a * 10) + b < (c * 10) + d)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (a < '9' || b < '8' || c < '9' || d < '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_numbers(char a, char b, char c, char d)
{
	while (a <= '9' && b <= '9' && c <= '9' && d <= '9')
	{
		ft_affichage(a, b, c, d);
		d++;
		if (d > '9')
		{
			c++;
			d = '0';
			if (c > '9')
			{
				b++;
				c = '0';
				if (b > '9')
				{
					a++;
					b = '0';
				}
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_numbers(a, b, c, d);
}
