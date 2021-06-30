##
## EPITECH PROJECT, 2020
## makefile_matchstick
## File description:
## makefile_matchstick
##

SRC	=	src/matchstick.c		\
		src/tools.c				\
		src/init_tab.c			\
		src/check_conditions.c	\
		src/print_txt.c			\
		src/game_core.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-g3

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
