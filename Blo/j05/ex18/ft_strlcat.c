/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 23:46:16 by lribere           #+#    #+#             */
/*   Updated: 2017/09/13 11:40:07 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

	int j;
	unsigned int tri;

	tri = 0;
	j = 0;
	while (dest[tri] != '\0')
		tri++;
	while (src[j] != '\0')
	{
		if(tri < size - 1) 
			dest[tri] = src[j];
		tri++;
		j++;
	}
	dest[tri - 1] = '\0';

	return (tri);
}

int main()
{
	char src[] = "frfrfrrfrfrfr";
	char dest[300] = "Je suis riche";
	char dest2[300] = "Je suis riche";
	unsigned size;

	size = 5;
	
	printf("%u",ft_strlcat(dest, src, size));
	printf("%c", '\n');
	printf("%lu", strlcat(dest2, src, size));
		   return(0);
}
