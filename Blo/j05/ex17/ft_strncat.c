/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 22:59:18 by lribere           #+#    #+#             */
/*   Updated: 2017/09/12 23:39:48 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j != nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[] = "Bou";
	char src2[] = "Bou";
	char dest[300] = "Jemaime";
	char dest2[300] = "Jemaime";
	int nb;

	nb = 2;
	printf("%s", ft_strncat(dest, src, nb));
	printf("%c", '\n');
	printf("%s", strncat(dest2, src2, nb));
}
