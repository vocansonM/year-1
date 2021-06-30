/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/solver.h"

int check_path(struct map_s map)
{
    int tmp = 0;
    tmp += check_right(map, tmp);
    tmp += check_down(map, tmp);
    tmp += check_left(map, tmp);
    tmp += check_up(map, tmp);
    return (tmp);
}

struct map_s add_o(struct map_s map)
{
    map = add_o_right(map);
    return (map);
}

struct map_s remove_o(struct map_s map)
{
    map = remove_o_right(map);
    return (map);
}

char **remove_blank(struct map_s map)
{
    for (int i = 0; i != map.y_len; i++)
        for (int j = 0; j != map.x_len; j++)
            if (map.tab[i][j] == ' ')
                map.tab[i][j] = '*';
    return (map.tab);
}

int check_unsolvable(struct map_s map)
{
    int count = 0;
    for (int i = 0; i != map.y_len; i++)
        for (int j = 0; j != map.x_len; j++)
            if (map.tab[i][j] == '*')
                count++;
    if (count == 0)
        return (-1);
}