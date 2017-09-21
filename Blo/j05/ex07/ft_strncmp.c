/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 21:54:09 by lribere           #+#    #+#             */
/*   Updated: 2017/09/14 17:15:57 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		if (i < n)
			i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char s1[] = "ABCDEZ";
	char s2[] = "ABCDEJ";
	unsigned int n;

	n = 0;
	printf("%d", ft_strncmp(s1, s2, n));
	printf("%c", '\n');
	printf("%d", strncmp(s1, s2, n));
	return (0);
}
