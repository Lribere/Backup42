/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 12:23:31 by lribere           #+#    #+#             */
/*   Updated: 2017/08/31 17:22:10 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int     ft_putchar(char c);
void    ft_print_alphabet(void);

int		main(void)
{	
	char c;

	c = 'a';

	ft_print_alphabet();
	return (0);
}
