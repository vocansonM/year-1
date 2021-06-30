/*
** EPITECH PROJECT, 2021
** solo_stumper
** File description:
** Matteo_Vocanson
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <ncurses.h>

typedef struct map
{
    char *str;
}map;

// tools.c
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
int my_strlen (char const *str);

// sokoban.c
int sokoban(char *map, int ac, char **av);
void help_function(void);
void keyboard_check(int ch, char *map, int ac, char **av);

// open_file.c
int save_file_to_str(int ac, char **av, int len);
int open_file(int ac, char **av);

// event.c
void event_left(char *map);
void event_right(char *map);
void event_up(char *map);
void event_down(char *map);

// ppos.c
int getppos(char *map);
int get_xup(char *map);
int get_xdown(char *map);
int get_xupper(char *map);
int get_xdowner(char *map);

#endif
