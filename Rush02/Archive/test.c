/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:55:18 by lribere           #+#    #+#             */
/*   Updated: 2017/09/16 18:55:49 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 30;
	char buf[i];
	int print;

//  while (argv[1][i] != '\0')
	{
//      i++;
	}
	printf("%d\n", i);
	print = read(0, buf, i);
	printf("%s", buf);
	return(0);
}
