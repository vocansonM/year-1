/*
** EPITECH PROJECT, 2021
** include
** File description:
** include_genrator
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct map_s {
    time_t t;
    char **tab;
    int x_len;
    int y_len;
    int nb;
    int tmp;
    int i;
    int j;
}map_t;

// tools.c
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
void put_tab(struct map_s map);
int my_atoi_str(char *str);

// error_handling.c
int error(int ac, char **av);
int check_input(char *str);

// malloc.c
char **malloc_map(struct map_s map);
void free_map(struct map_s map);

// fill_tab.c
char **fill_tab(struct map_s map);
char **generate_maze(struct map_s map);
struct map_s generate(struct map_s map);
struct map_s generate_final(struct map_s map);

// fill_tab_perfect.c
char **fill_tab_perfect(struct map_s map);
char **generate_maze_perfect(struct map_s map);
struct map_s generate_perfect(struct map_s map);
struct map_s generate_final_perfect(struct map_s map);

// string_compare.c
int string_compare(char *to_compare, char *compared);

#endif