/*
** EPITECH PROJECT, 2021
** include
** File description:
** include_dante
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct map_s {
    char **tab;
    int x_len;
    int y_len;
    int i;
    int j;
}map_t;

//tools.c
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);

// file_cpy.c
off_t file_size(const char *filename);
struct map_s load_map(char const *filepath);
char *my_strdup(char const *src);
char *buffer(char const *filepath);
int my_strlen(const char *str);

// put_2d_array
void put_2d_array(char **array, map_t map);

// my_str_to_word_array
int separator(char c, char tweak);
int get_word_number(char const *str, char tweak);
int word_len(char const *str, char tweak, int i);
char *fill_tab(char const *str, char tweak, int *pos);
char **tweak_buffer_into_arrays(char const *str, char tweak);

// solver_tools.c
int solver_check(struct map_s map);
struct map_s get_max_value(char **tab);

// map_solver.c
struct map_s add_o(struct map_s map);
struct map_s remove_o(struct map_s map);
int check_path(struct map_s map);
char **remove_blank(struct map_s map);
int check_unsolvable(struct map_s map);

// check_path.c
int check_right(struct map_s map, int tmp);
int check_down(struct map_s map, int tmp);
int check_left(struct map_s map, int tmp);
int check_up(struct map_s map, int tmp);

// add_o.c
struct map_s add_o_right(struct map_s map);
struct map_s add_o_down(struct map_s map);
struct map_s add_o_left(struct map_s map);
struct map_s add_o_up(struct map_s map);

// remove_o.c
struct map_s remove_o_right(struct map_s map);
struct map_s remove_o_down(struct map_s map);
struct map_s remove_o_left(struct map_s map);
struct map_s remove_o_up(struct map_s map);

// move_forward.c
struct map_s right_o(struct map_s map);
struct map_s down_o(struct map_s map);
struct map_s left_o(struct map_s map);
struct map_s up_o(struct map_s map);

// move_backward.c
struct map_s right_blank(struct map_s map);
struct map_s down_blank(struct map_s map);
struct map_s left_blank(struct map_s map);
struct map_s up_blank(struct map_s map);

//solver.c
struct map_s solver_loop(struct map_s map, char **av);

#endif