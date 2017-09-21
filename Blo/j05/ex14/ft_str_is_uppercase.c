/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:08:46 by lribere           #+#    #+#             */
/*   Updated: 2017/09/12 20:42:58 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 93)
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
	char str[] = "BLOOCOTO";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
