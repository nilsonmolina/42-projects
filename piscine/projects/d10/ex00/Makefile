# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmolina <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 16:26:33 by nmolina           #+#    #+#              #
#    Updated: 2017/11/06 18:05:39 by nmolina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_C = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
SRC_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC_C) $(HEADER)
	ar -rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean:
	rm $(SRC_O)

fclean: clean
	rm $(NAME)

re: fclean all
