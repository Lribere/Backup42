/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testLol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 23:57:16 by lribere           #+#    #+#             */
/*   Updated: 2017/09/03 11:32:28 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
	nbr = 3;
	ft_putchar(*nbr);
}


int main()
{
	ft_ft();
	return (0);
}