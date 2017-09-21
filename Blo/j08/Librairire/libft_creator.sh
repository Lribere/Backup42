# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lribere <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/14 11:54:52 by lribere           #+#    #+#              #
#    Updated: 2017/09/14 16:47:09 by lribere          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a
rm -Rf ft_*.o