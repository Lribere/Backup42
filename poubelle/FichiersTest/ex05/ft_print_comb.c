/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 22:35:30 by lribere           #+#    #+#             */
/*   Updated: 2017/09/02 15:08:09 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_affichage(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a <= '6' && b <= '8' && c <= '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' && b <= '8' && c <= '9')
	{
		ft_affichage(a, b, c);
		c++;
		if (c > '9')
		{
			b = b + 1;
			c = b + 1;
			if (b > '8')
			{
				a = a + 1;
				b = a + 1;
				c = a + 2;
			}
		}
	}
}
