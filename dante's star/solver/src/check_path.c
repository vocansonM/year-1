/*
** EPITECH PROJECT, 2021
** check_map.c
** File description:
** check_map
*/

#include "../include/solver.h"

int check_right(struct map_s map, int tmp)
{
    if (map.j != map.x_len - 1)
        if (map.tab[map.i][map.j + 1] == '*')
            tmp += 1;
    return (tmp);
}

int check_down(struct map_s map, int tmp)
{
    if (map.i != map.y_len - 1)
        if (map.tab[map.i + 1][map.j] == '*')
            tmp += 1;
    return (tmp);
}

int check_left(struct map_s map, int tmp)
{
    if (map.j != 0)
        if (map.tab[map.i][map.j - 1] == '*')
            tmp += 1;
    return (tmp);
}

int check_up(struct map_s map, int tmp)
{
    if (map.i != 0)
        if (map.tab[map.i - 1][map.j] == '*')
            tmp += 1;
    return (tmp);
}