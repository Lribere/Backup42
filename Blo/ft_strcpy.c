/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 23:53:21 by lribere           #+#    #+#             */
/*   Updated: 2017/09/11 12:03:28 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0; 
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return(dest);
}

int main()
{
	char src[] = "Mul";
	char dest[] = "Yellll";

	ft_putstr(src);
	ft_strcpy(dest, src);
	ft_putchar('\n');
	ft_putstr(dest);

	return(0);
	
}
