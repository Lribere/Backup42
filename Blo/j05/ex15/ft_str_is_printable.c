/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 21:06:26 by lribere           #+#    #+#             */
/*   Updated: 2017/09/12 21:21:30 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127) 
			i++;
		else
			return (0);
	}
	if (str[i] == '\0')
		return (1);
	return(0);
}

int main()
{
	char str[] = "FN8u98` frofr";
	
	printf("%d", ft_str_is_printable(str));
	return (0);
}
