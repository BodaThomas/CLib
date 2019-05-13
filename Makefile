##
## EPITECH PROJECT, 2019
## CLib
## File description:
## An example of a Makefile who compile with the library
##

NAME	=	example

SRC	=	src/main.c \
		src/help.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Wall -Wextra -Iinclude

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc $(OBJ) -o $(NAME) $(CFLAGS) -Llib/my -lmy

tests_run:
		make -C tests/
		./tests/clib_tests

clean:
		rm -f $(OBJ)
		rm -f *~ \#*\#
		make -C tests clean

fclean:		clean
		rm -f $(NAME)
		make -C lib/my fclean
		make -C tests/ fclean

re:		fclean all

.PHONY:		all clean fclean re
