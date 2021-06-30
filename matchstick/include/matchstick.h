/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

//matchstick.c
int game_loop(int tab_line, int max_stick, char **board);
char **remove_matches(int remove_line, int matches, int tab_line, char **board);

//check_error.c
int c_win(char **board, int player, int line);
int error_check_line(int remove_line, int tab_line);
int error_check_matches(int matches, int max_stick, int ln_matches);

//init_tab.c
char **fill_board(char **board, int tab_line, int tab_line_len);
int print_game_board(int tab_line, int tab_line_len);
int matches_left(char **board, int tab_line);

//tools.c
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
void my_put_tab (char **tab, int line, int len);
int my_getnbr(char const *str);

//print_txt.c
void print_player(int matches, int rm_line, int p);
void print_turn(int p);

//game_core.c
int player_line(int rm_line, int tab_line);
int player_matches(int matches, int max_stick, int rm_line, char **board);
int ai_line(int tab_line, char **board);
int ai_matches(int max_stick, int rm_line, char **board);

#endif