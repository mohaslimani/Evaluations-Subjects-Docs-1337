# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 08:54:57 by msoulaim          #+#    #+#              #
#    Updated: 2019/01/28 09:00:57 by msoulaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c
ar rc libft.a *.o
rm *.o