/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 19:59:25 by lribere           #+#    #+#             */
/*   Updated: 2017/09/13 23:31:58 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char 	c;
	char *str1;
	char *str2;
	char *str3;
	int 	nb;
	int		a;
	int		b;

	c = 'L';
	str1 = "Je suis Multimilliardaire";
	str2 = "I'm god";
	str3 = "465565";
	nb = -2147483648;
	a = 2;
	b = 3;
	//ft_putchar(c);
	//ft_putchar('\n');
	//ft_putstr(str1);
	//ft_putnbr(nb);
	//ft_swap(&a, &b);
	//ft_putnbr(a);
	//ft_putchar('\n');
	//ft_putnbr(b);
	//printf("%d", ft_strcmp(str1, str2));
	printf("%d", ft_atoi(
}
