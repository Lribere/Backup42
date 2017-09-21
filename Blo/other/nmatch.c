/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:08:02 by lribere           #+#    #+#             */
/*   Updated: 2017/09/10 21:59:44 by lribere          ###   ########.fr       */
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
int     nmatch(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s1 == '\0' && *s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return (nmatch(s1, s2 + 1));
        if (*(s2 + 1) != '\0')
            return (0);
    }
    if (*s1 == *s2)
        return (nmatch(s1 + 1, s2 + 1));
    if (*s2 == '*')
        return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
    return (0);
}
	
int main()
{
	char s1[] = "abcbd";
	char s2[] = "*b*";

	nmatch(s1,s2);
	printf("%d\n", nmatch(s1, s2));
	return(0);
}
