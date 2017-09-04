/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 12:44:27 by lribere           #+#    #+#             */
/*   Updated: 2017/09/04 14:02:05 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mode(int *a, int *b)
{
	int c;
	int d;

	 c = *a / *b;
	 d = *a % *b;
	*a = c;
	*b = d;
}


int main()
{
	int a;
	int b;
	
	a = 513;
	b = 20;
	
	printf("%d", a);
	printf("%d", b);
	ft_ultimate_div_mode(&a, &b);
	printf("%s","Alors" );
	printf("%d", a);
	printf("%d", b);
}
