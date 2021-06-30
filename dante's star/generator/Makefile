##
## EPITECH PROJECT, 2020
## makefile_generator
## File description:
## makefile_generator
##

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

CFLAGS	=	-g3

superclean:	clean fclean

re:		fclean all

.PHONY:		all fclean clean re
