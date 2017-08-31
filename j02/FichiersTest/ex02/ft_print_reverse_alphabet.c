/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:26:30 by lribere           #+#    #+#             */
/*   Updated: 2017/08/31 16:27:36 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char i;

    i = 'z';
    while (i >= 'a')
    {
        ft_putchar(i);
        i = i - 1;
    }
}
