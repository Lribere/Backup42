/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:49:31 by lribere           #+#    #+#             */
/*   Updated: 2017/09/16 12:13:34 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	if (str[i] == '+')
	{
		sig = 1;
		i++;
	}
	while (str[i] != '\0')
	{
		ga = ga * 10 + str[i] - '0';
		i++;
	}
	return (ga * sig);
}

int		main(void)
{
	char *str = "-456889898";

	printf("%d", ft_atoi(str));
	return (0);
}
