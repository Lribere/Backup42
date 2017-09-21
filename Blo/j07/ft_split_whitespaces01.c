/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:55:45 by lribere           #+#    #+#             */
/*   Updated: 2017/09/19 19:04:33 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int		hm_dm1(char *str)
{
	int i;
	int hm;

	i = 0;
	hm = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		if (str[i] && (str[i] != '\t' || str[i] != '\n' || str[i] == ' '))
			hm++;
		while (str[i] && (str[i] != '\t'  && str[i] != '\n' && str[i] == ' '))
			i++;
	}
	return (hm);
}
char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	char **dest;;

	i = 0;
	j = 0;
	printf("%d \n", hm_dm1(str));
	dest = (char**)malloc(sizeof(**dest) * hm_dm1(str));  
	while (str[i] != '\0')
	{
		while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
		{
			dest[j][i] = str[i];
			i++;
		}
		j++;
	}
	
	return (dest);
}

int		main()
{
	char *str = "      rfrfrJe Suis	Multimilliardaire \n et Bouah";
	char **dest = 0;
	int i;
	int j;

	i = 0;
	j = 0;
	
	printf("%s \n", str);
	while (ft_split_whitespaces(str)[i][j])
	{
		while (ft_split_whitespaces(str)[i][j] != '\0')
			printf("%c", dest[i][j++]);
		j = 0;
		i++;
	}
}
