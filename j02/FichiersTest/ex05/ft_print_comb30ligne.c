/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 22:35:30 by lribere           #+#    #+#             */
/*   Updated: 2017/09/01 15:28:04 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb()
{
	char i = 0; 
	char g = 1; 
	char k = 2;

	i = '0'; 
		g = '1'; 
		k = '2';
    
	while (i <= '7' && g <= '8' && k <= '9')
	{
		ft_putchar(i);
		ft_putchar(g);
		ft_putchar(k);
		ft_putchar(' ');
		ft_putchar(',');
		
		k = k + 1;
			if ( k > '9')
			{
				g = g + 1;
				k = g + 1;
				if (g > '8')
				{
					i = i + 1;
					g = i + 1;
					k = i + 2;
				}
			}	
	}
}
