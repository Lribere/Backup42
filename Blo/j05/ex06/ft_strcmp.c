/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 20:09:14 by lribere           #+#    #+#             */
/*   Updated: 2017/09/13 17:00:37 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char s1[] = "ABCDEs";
	char s2[] = "ABCDEK";

	printf("%d", ft_strcmp(s1, s2));
	printf("%c", '\n');
	printf("%d", strcmp(s1, s2));
	return (0);
}
