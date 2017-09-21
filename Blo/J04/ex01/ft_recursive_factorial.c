/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 22:33:28 by lribere           #+#    #+#             */
/*   Updated: 2017/09/07 15:50:26 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int ft_recursive_factorial(int nb)
{
	if(nb == 0)
		return(1);
	else if(nb < 0)
		return(0);

	return (nb * ft_recursive_factorial (nb - 1));
}

int main()
{
	int nb;
	int cat;
	
	nb = 13;
	cat = ft_recursive_factorial(nb);
	ft_putnbr(cat);
}
