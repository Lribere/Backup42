/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 23:32:25 by lribere           #+#    #+#             */
/*   Updated: 2017/09/03 14:35:42 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_ft(int *nbr);

int		main(void)
{
	int a;

	a = 100;
	ft_putchar(a);
	ft_ft(&a);
	ft_putchar(a);
}
