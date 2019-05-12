##
## EPITECH PROJECT, 2019
## CLib
## File description:
## The Makefile of the CLib Unit Tests
##

NAME	=	clib_tests

SRC	=	test_my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Wall -Wextra -Iinclude

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ../lib/my
		gcc $(OBJ) -o $(NAME) $(CFLAGS) -L../lib/my -lmy -lcriterion

clean:
		rm -f $(OBJ)
		rm -f *~ \#*\#

fclean:		clean
		rm -f $(NAME)
		make -C lib/my fclean

re:		fclean all

.PHONY:		all clean fclean re
