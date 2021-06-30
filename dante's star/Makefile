##
## EPITECH PROJECT, 2021
## Makfile
## File description:
## Makefile
##

all:
		make -C generator
		make -C solver

OBJ	=	$(SRC:.c=.o)

clean:
		rm -f $(OBJ)

fclean:
		make superclean -C generator
		make superclean -C solver

re:		fclean all