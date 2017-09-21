/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 23:00:01 by lribere           #+#    #+#             */
/*   Updated: 2017/09/20 13:03:44 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_words_counter(char *str)
{
    int i;
    int count;
    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        if (str[i] && (str[i] != ' ' || str[i] != '\n' || str[i] != '\t'))
            count++;
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
    }
    return (count);
}
char    **ft_create_tab(char *str, int count)
{
    char    **tab;
    int     i;
    int     j;
    int     k;
    i = 0;
    j = 0;
    k = 0;
    if (!(tab = (char**)malloc(sizeof(char*) * (count + 1))))
        return (NULL);
    while (k < count)
    {
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
						  && i++))
            j++;
        if (!(tab[k] = (char*)malloc(sizeof(char) * (j + 1))))
            return (NULL);
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        j = 0;
        k++;
    }
    tab[k] = NULL;
    return (tab);
}
char    **ft_rmpl_tab(char **tab, char *str, int count)
{
    int k;
    int i;
    int p;
    k = 0;
    i = 0;
    p = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
        i++;
    while (k < count)
    {
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
        {
            tab[k][p] = str[i];
            i++;
            p++;
        }
        tab[k][p] = '\0';
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        p = 0;
        k++;
    }
    return (tab);
}
char    **ft_split_whitespaces(char *str)
{
    char    **tab;
    int     count;
    if (!str)
        return (NULL);
    count = ft_words_counter(str);
    tab = ft_create_tab(str, count);
    tab = ft_rmpl_tab(tab, str, count);
    return (tab);
}

int main()
{
    char *str = "      rfrfrJe Suis Multimilliardaire \n et Bouah'";
   	char **tab = ft_split_whitespaces(str);
   	int i;
    int j;

    i = 0;
    j = 0;

    printf("%s \n", tab[4]);
}

