/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:46:35 by lribere           #+#    #+#             */
/*   Updated: 2017/09/13 13:32:24 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int tri;

	tri = 0;
	while (src[tri] != '\0')
	{
		if (tri < size - 1)
			dest[tri] = src[tri];
		tri++;
	}
	dest[tri] = '\0';
	return (tri);
}

int				main(void)
{
	char src[] = "Atole";
	char dest[] = "Bonjourr";
	char dest2[] = "Bonjourr";
	unsigned int size;

	size = 5;
	printf("%u", ft_strlcpy(src, dest, size));
	printf("%c", '\n');
	printf("%lu", strlcpy(src, dest2, size));
}
