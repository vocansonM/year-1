/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/solver.h"

int solver_check(struct map_s map)
{
    if (map.tab[map.y_len - 1][map.x_len - 1] == 'o')
        return (0);
    else
        return (1);
}

struct map_s get_max_value(char **tab)
{
    struct map_s map;
    for (map.y_len = 0; map.tab[map.y_len] != NULL; map.y_len++);
    for (map.x_len = 0; map.tab[0][map.x_len] != '\0'; map.x_len++);
    return (map);
}