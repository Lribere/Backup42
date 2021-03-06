/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:09:54 by lribere           #+#    #+#             */
/*   Updated: 2017/09/08 10:37:49 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_antidote(int i, int j, int k)
{


	if((i == j) && (i == k))
		return(i);

	if((i < j && i > k) || (i > j && i < k))
		return(i);
	if((j < k && j > i) || (j > k && j < i))
		return(j);
	if((k < j && k > i) || (k > j && k < i))
		return(k);
	
	return(0);
}




int main()
{
	int i;
	int j;
	int k;
	int cat;

	i = 47;
	j = 47;
	k = 47;

	cat = ft_antidote(i, j, k);
	ft_putnbr(cat);
	return(0);
}
