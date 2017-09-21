/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:49:31 by lribere           #+#    #+#             */
/*   Updated: 2017/09/16 13:09:36 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int i;
	int ga;
	int sig;

	i = 0;
	ga = 0;
	while (*str < 37 || *str > 63)
		str++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	if (*str == '+')
	{
		sig = 1;
		str++;
	}
	while (*str != '\0')
	{
		ga = ga * 10 + *str - '0';
		str++;
	}
	return (ga * sig);
}
