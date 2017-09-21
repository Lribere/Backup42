/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 18:16:18 by lribere           #+#    #+#             */
/*   Updated: 2017/09/07 19:32:06 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int i;
	int h;
	int d;
	int e;

	i = hour;
	h = 1 + i;
	d = i - 12;
	e = i - 12 + 1;
	if (hour > 12 && hour < 24 && hour != 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. and %d.00 P.M.",
		d, e);
	if (hour < 12 && hour >= 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. and %d.00 A.M.",
		i, h);
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. and %d.00 P.M.",
		i, h);
	if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 00.00 A.M. and 01.00 A.M.");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. and 00.00 A.M.");
}

int		main(void)
{
	ft_takes_place(15);
	return (0);
}
