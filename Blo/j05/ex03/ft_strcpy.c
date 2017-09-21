/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 23:53:21 by lribere           #+#    #+#             */
/*   Updated: 2017/09/13 13:36:19 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "thtttg";
	char dest[300] = "";

	printf("%s",ft_strcpy(dest, src));
	printf("%c", '\n');
	printf("%s",strcpy(dest, src));
		  return (0);
}
