/*
** EPITECH PROJECT, 2021
** add_o.c
** File description:
** add_o
*/

#include "../include/solver.h"

struct map_s add_o_right(struct map_s map)
{
    if (map.j != map.x_len)
        if (map.tab[map.i][map.j + 1] == '*')
            return (right_o(map));
        else
            return (add_o_down(map));
}

struct map_s add_o_down(struct map_s map)
{
    if (map.i != map.y_len)
        if (map.tab[map.i + 1][map.j] == '*')
            return (down_o(map));
        else
            return (add_o_left(map));
}

struct map_s add_o_left(struct map_s map)
{
    if (map.j != 0)
        if (map.tab[map.i][map.j - 1] == '*')
            return (left_o(map));
        else
            return (add_o_up(map));
}

struct map_s add_o_up(struct map_s map)
{
    if (map.i != 0)
        if (map.tab[map.i - 1][map.j] == '*')
            return (up_o(map));
        else
            return (map);
}