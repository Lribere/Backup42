/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:29:17 by lribere           #+#    #+#             */
/*   Updated: 2017/09/07 15:49:13 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_iterative_factorial(int nb)
{
	int ser;
	int i;

	ser = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);

		while (i <= nb)
		{
			ser = ser * i;
			i++;
		}
	return (ser);
}

int		main(void)
{
	int nb;
	int hug;

	nb = 0;
	hug = ft_iterative_factorial(nb);
	ft_putnbr(hug);
}
