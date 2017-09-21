/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:57:53 by lribere           #+#    #+#             */
/*   Updated: 2017/09/20 17:24:53 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int taille;

	i = 1;
	j = 0;
	taille = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			j++;
		taille = taille + j;
		j = 0;
		i++;
	}
	return (taille);
}

void	ft_concat(int argc, char **argv, char *s1, int taille)
{
	int i;
	int j;
	int h;

	i = 0;
	j = 1;
	h = 0;
	while (i < taille)
	{
		while (j < argc)
		{
			while (argv[j][h] != '\0')
			{
				s1[i] = argv[j][h];
				h++;
				i++;
			}
			if (j < argc - 1)
				s1[i] = '\n';
			i++;
			h = 0;
			j++;
		}
	}
	s1[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*s1;
	int		taille;

	taille = ft_strlen(argc, argv);
	s1 = (char*)malloc(sizeof(*s1) * taille);
	ft_concat(argc, argv, s1, taille);
	return (s1);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
