#!/bin/sh
# THIS WILL DO ALL FILES IN THE CURRENT DIRECTORY
#gcc -c *.c 
#-------------------------------------------------
# THIS TURNS THEM INTO LIBRARY FILES - .o
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
# THIS ARCHIVES THEM INTO A SINGLE LIBRARY FILE
ar -rc libft.a *.o
# THIS INDEXES THE LIBRARY FILE
ranlib libft.a
# THIS CLEANS UP ALL THE .o FILES
rm *.o
