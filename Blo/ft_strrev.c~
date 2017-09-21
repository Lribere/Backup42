/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 20:33:23 by lribere           #+#    #+#             */
/*   Updated: 2017/09/04 23:32:13 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	swa;

	i = 0;
	n = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (i > n)
	{
		swa = str[i];
		str[i] = str[n];
		str[n] = swa;
		i--;
		n++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "Je vous enculeuhhh tous";

	ft_putstr(str);
	ft_strrev(str);
	ft_putstr(str);
	return (0);
}
