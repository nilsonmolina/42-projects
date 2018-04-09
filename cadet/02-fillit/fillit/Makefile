# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndoorn <ndoorn@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 18:24:46 by ndoorn            #+#    #+#              #
#    Updated: 2018/01/31 13:03:51 by ndoorn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := "-Wall" "-Wextra" "-Werror"

NAME := fillit

SRC :=	fillit.c\
		main.c\
		shapes.c\
		verify.c

OBJ :=	fillit.o\
		main.o\
		shapes.o\
		verify.o

all: $(NAME)

$(NAME):
	@cc -c $(CFLAGS) $(SRC)
	@cc -o $(NAME) $(C_FLAGS) $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
