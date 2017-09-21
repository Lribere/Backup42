/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 16:31:29 by lribere           #+#    #+#             */
/*   Updated: 2017/09/07 16:38:07 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return(0);
	
	if (power ==  0)
	return(1);
	return(nb = nb * (ft_recursive_power(nb, power - 1)));
}

int main()
{
	int nb;
	int power;
	int cat;

	nb = 50;
	power = 4;

	cat = ft_recursive_power(nb, power);
	ft_putnbr(cat);
}
