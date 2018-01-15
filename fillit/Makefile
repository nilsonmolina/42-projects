# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndoorn <ndoorn@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 18:24:46 by ndoorn            #+#    #+#              #
#    Updated: 2017/12/14 18:24:46 by ndoorn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := "-Wall" "-Wextra" "-Werror" "-g" "-o"

NAME := fillit

SRC :=	fillit.c\
		main.c\
		shapes.c\
		verify.c

OBJ := $(patsubst %.c,%.o,$(wildcard *.c))

all: $(NAME)

$(NAME):
	@cc $(CFLAGS) $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
