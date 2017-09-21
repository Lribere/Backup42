/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:25:16 by lribere           #+#    #+#             */
/*   Updated: 2017/09/11 19:47:19 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *src, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (src);
    while (src[i] != '\0')
    {
		j = 0;
        while (src[i + j] == to_find[j])
        {
            j++;
			if (to_find[j] == '\0')
				return (src + i);
        }
        i++;
    }
    return (0);
}

int main()
{
	char src[] = "Kirim";
	char to_find[0];

	printf("%s", ft_strstr(src, to_find));
	printf("%c", '\n');
	printf("%s", strstr(src, to_find));

    return(0);
}
