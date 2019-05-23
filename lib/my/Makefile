##
## EPITECH PROJECT, 2018
## project
## File description:
## The Makefile of the lib
##

NAME = libmy.a

SRC =	my_compute_power_rec.c \
		my_compute_square_root.c \
		my_find_prime_sup.c \
		my_getnbr.c \
		my_is_prime.c \
		my_isneg.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_revstr.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_str_isalphanum.c \
		my_strcat.c \
		my_strcpy.c \
		my_strlen.c \
		my_strncat.c \
		my_strncpy.c \
		my_swap.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strdup.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean $(NAME)
