##
## EPITECH PROJECT, 2020
## makefile_sokoban
## File description:
## makefile_sokoban
##

SRC	=	src/sokoban.c	\
		src/tools.c		\
		src/open_file.c	\
		src/event.c		\
		src/ppos.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-lncurses -g3 -Wall

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

superclean:	clean fclean

re:		fclean all

.PHONY:		all fclean clean re
