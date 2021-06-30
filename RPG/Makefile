##
## EPITECH PROJECT, 2020
## my_defender
## File description:
## makefile
##

NAME	=	my_rpg

SRCS	=	lib/lib.c								\
			lib/lib2.c								\
			src/collision/collision.c				\
			src/collision/collision_right.c			\
			src/collision/collision_left.c			\
			src/collision/collision_up.c			\
			src/collision/collision_down.c			\
			src/destroy/destroy.c					\
			src/destroy/destroy2.c					\
			src/game/boss.c							\
			src/game/market.c						\
			src/game/move.c							\
			src/game/my_rpg.c						\
			src/game/play.c							\
			src/game/quest.c						\
			src/game/fight.c						\
			src/game/fight2.c						\
			src/game/draw_items.c					\
			src/init_struct/init_struct.c			\
			src/init_struct/init_struct2.c			\
			src/init_struct/init_struct3.c			\
			src/init_struct/init_struct4.c			\
			src/init_struct/init_struct5.c			\
			src/init_struct/set_init_to_struct.c	\
			src/menu/check_status_settings.c		\
			src/menu/check_status.c					\
			src/menu/check_status2.c				\
			src/menu/open_menu.c					\
			src/menu/open_menu2.c					\
			src/menu/open_menu3.c					\
			src/menu/window_event.c					\
			src/utils/mouse.c						\
			src/utils/instruction.c					\
			src/utils/background.c					\
			src/utils/stats.c						\
			src/utils/main.c

OBJS	=	$(SRCS:.c=.o)

FFLAGS	=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm

CFLAGS	=	-Wall -Wextra -g3 -Iinc

all:		$(NAME)

$(NAME):	$(OBJS) $(SRCS)
		gcc -o $(NAME) $(OBJS) $(FFLAGS)

clean:
		rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

superclean:	clean fclean

re: fclean all
