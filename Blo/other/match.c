/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:08:02 by lribere           #+#    #+#             */
/*   Updated: 2017/09/10 20:54:10 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
int		match(char *s1, char *s2)
{
	if(*s1 == '\0' && *s2 == '\0')
		return(1);
	if(*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return(0);
	if(*s1 == *s2)
		return(match(s1 + 1, s2 + 1));
	if(*s2 == '*')
		return(match(s1, s2 + 1) || match(s1 + 1, s2));
	
	return(0);
}
	
int main()
{
	char s1[] = "Hello";
	char s2[] = "Hell*******";

	match(s1,s2);
	printf("%d\n", match(s1, s2));
	return(0);
}
