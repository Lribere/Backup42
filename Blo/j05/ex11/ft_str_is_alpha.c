/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:38:59 by lribere           #+#    #+#             */
/*   Updated: 2017/09/12 20:25:48 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

int		main(void)
{
	char str[] = "\0";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
