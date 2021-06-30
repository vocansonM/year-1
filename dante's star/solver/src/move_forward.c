/*
** EPITECH PROJECT, 2021
** movement.c
** File description:
** movement
*/

#include "../include/solver.h"

struct map_s right_o(struct map_s map)
{
    map.tab[map.i][map.j + 1] = 'o';
    map.j++;
    return (map);
}

struct map_s down_o(struct map_s map)
{
    map.tab[map.i + 1][map.j] = 'o';
    map.i++;
    return (map);
}

struct map_s left_o(struct map_s map)
{
    map.tab[map.i][map.j - 1] = 'o';
    map.j--;
    return (map);
}

struct map_s up_o(struct map_s map)
{
    map.tab[map.i - 1][map.j] = 'o';
    map.i--;
    return (map);
}