/*
** EPITECH PROJECT, 2021
** remove_o.c
** File description:
** remove_o
*/

#include "../include/solver.h"

struct map_s remove_o_right(struct map_s map)
{
    if (map.j != map.x_len)
        if (map.tab[map.i][map.j + 1] == 'o')
            return (right_blank(map));
        else
            return (remove_o_down(map));
}

struct map_s remove_o_down(struct map_s map)
{
    if (map.i != map.y_len)
        if (map.tab[map.i + 1][map.j] == 'o')
            return (down_blank(map));
        else
            return (remove_o_left(map));
}

struct map_s remove_o_left(struct map_s map)
{
    if (map.j != 0)
        if (map.tab[map.i][map.j - 1] == 'o')
            return (left_blank(map));
        else
            return (remove_o_up(map));
}

struct map_s remove_o_up(struct map_s map)
{
    if (map.i != 0)
        if (map.tab[map.i - 1][map.j] == 'o')
            return (up_blank(map));
        else
            return (map);
}