//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 19:32:25 by lribere           #+#    #+#             */
/*   Updated: 2017/09/14 22:43:34 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] - s2[i] > 0)
			return(1);
		if (s1[i] - s2[i] < 0)
			return(-1);
		if(s1[i] - s2[i] == 0)
			return(0);
		i++;
	}
	return(0);
				
}

char	*ft_strcopy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char pon[10000] = {0};

	i = 1;
	j = 0;

	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) < 0)
		{
			ft_strcopy(pon, argv[i + 1]);
			ft_strcopy(argv[i + 1], argv[i]);
			ft_strcopy(argv[i], pon);
			i = 1;
		}
		else
			i++;

		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
		j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;

	}
	return(0);
}
