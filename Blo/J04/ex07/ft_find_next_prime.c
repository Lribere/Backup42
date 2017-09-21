
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:34:07 by lribere           #+#    #+#             */
/*   Updated: 2017/09/07 16:18:29 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_find_prime(int nb)
{
	int i;
	
	i = 2;

	if (nb == 1)
		return(0);
	while(nb % i != 0)
		i++;
	if(i == nb)
		return(1);
	if( i != nb)
		return(0);

	return(0);
}

int ft_find_next_prime(nb)
{
	while(ft_find_prime(nb) != 1)
		nb++;

	return(nb);
}


int main()
{
	int nb;
	int cat;
	
	nb = 50000;
	cat = ft_find_next_prime(nb);
	ft_putnbr(cat);

	return(0);

}
