/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:19:17 by lribere           #+#    #+#             */
/*   Updated: 2017/09/20 15:17:46 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{ 
	int i;
	int *tab;

	if (max <= min)
		return (0);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

int		main()
{
	int i;
	int min;
	int max;
	int *range;

	min = 50;
	max = 30;
	i = 0;
	//ft_ultimate_range(&range, min, max);
	printf("%d", ft_ultimate_range(&range, min, max));
	return(0);
}
