/*
** EPITECH PROJECT, 2021
** movement.c
** File description:
** movement
*/

#include "../include/solver.h"

struct map_s right_blank(struct map_s map)
{
    map.tab[map.i][map.j] = ' ';
    map.j++;
    return (map);
}

struct map_s down_blank(struct map_s map)
{
    map.tab[map.i][map.j] = ' ';
    map.i++;
    return (map);
}

struct map_s left_blank(struct map_s map)
{
    map.tab[map.i][map.j] = ' ';
    map.j--;
    return (map);
}

struct map_s up_blank(struct map_s map)
{
    map.tab[map.i][map.j] = ' ';
    map.i--;
    return (map);
}