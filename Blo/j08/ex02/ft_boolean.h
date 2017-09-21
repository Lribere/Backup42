/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribere <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 22:33:56 by lribere           #+#    #+#             */
/*   Updated: 2017/09/21 00:22:04 by lribere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG  "I have an odd number of arguments. \n"
# define SUCCESS 0
# define EVEN(x) ((x%2) == 0)

typedef int	t_bool;

#endif
