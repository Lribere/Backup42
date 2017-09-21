/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:26:56 by lribere           #+#    #+#             */
/*   Updated: 2017/09/12 17:22:14 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' ||
	c == '+' || c == '-')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_space(str[i - 1]) == 1 || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "salut comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
