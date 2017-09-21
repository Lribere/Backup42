/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:09:20 by lribere           #+#    #+#             */
/*   Updated: 2017/09/15 12:30:41 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define	LEN	42000000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char *str;
	int i;

	i = 0;
	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	while(1);
//	ft_putstr(str);
	return(0);
}
