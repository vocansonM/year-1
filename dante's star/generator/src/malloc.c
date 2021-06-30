/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/generator.h"

char **malloc_map(struct map_s map)
{
    int i = 0;

    map.tab = malloc(sizeof(char *) * map.y_len + 1);
    for (; i != map.y_len; i++)
        map.tab[i] = malloc(sizeof(char) * map.x_len + 1);
    map.tab[i] = NULL;
    return (map.tab);
}

void free_map(struct map_s map)
{
    for (int i = 0; i != map.y_len; i++)
        free(map.tab[i]);
    free (map.tab);
}