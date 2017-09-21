/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aetchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:37:30 by aetchego          #+#    #+#             */
/*   Updated: 2017/09/16 21:03:55 by aetchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char c;
	int print;
	int i;
	char *str;
	i = 0;

	str = (char*)malloc(sizeof(char) * (100000));

	while(read(0, &c, sizeof(char))>0)
	{
   		write(1, &c, sizeof(char));
		str[i] = c;
		i++;
	}

	int j;
	j = 0;
	while (j < 5125)
	{
		printf("%c", str[j]);
		j++;
	}

	return (0);
}
