/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Valeur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:45:12 by lribere           #+#    #+#             */
/*   Updated: 2017/09/15 12:46:17 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("char : %lu octets\n", sizeof(char));
	printf("int : %lu octets\n", sizeof(int));
	printf("long : %lu octets\n", sizeof(long));
	printf("double : %lu octets\n", sizeof(double));
}
