/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 12:22:58 by lribere           #+#    #+#             */
/*   Updated: 2017/09/16 16:27:58 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
int		ft_putnbr(int nb);
void	ft_putchar(char c);

int main(int argc, char **argv)
{
	argc = 8;
	int r;
	int i;
	int j;
	int l;

	i = 1;
	j = 0;
	
	r = ft_atoi(&argv[i][0] - &argv[i][1]);
	l = ft_atoi(&argv[i][j + 9]);
	
	ft_putnbr(r);
	ft_putchar('\n');
	ft_putnbr(l);
	return(0);
}
