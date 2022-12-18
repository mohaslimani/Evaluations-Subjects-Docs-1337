# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msoulaim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/31 04:50:36 by msoulaim          #+#    #+#              #
#    Updated: 2019/01/31 05:33:31 by msoulaim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/*.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME) :
	gcc -I includes/*.h -c $(SRC)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
