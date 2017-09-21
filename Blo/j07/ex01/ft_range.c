/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:27:44 by lribere           #+#    #+#             */
/*   Updated: 2017/09/20 15:28:12 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (max <= min)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int main()
{
	int i;
	int min;
	int max;

	i = 0;
	min = 20;
	max = 10;
	printf("%i", ft_range(min, max));
	/* while (ft_range(min, max)[i] != '\0')
	{
		printf("%d", ft_range(min, max)[i]);
		printf("%c", ' ');
		i++;
		}*/
	return (0);
}
