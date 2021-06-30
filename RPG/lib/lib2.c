/*
** EPITECH PROJECT, 2020
** lib
** File description:
** lib
*/

#include "../include/rpg.h"

sfVector2f get_pos(int x, int y)
{
    sfVector2f vector;

    vector.x = x;
    vector.y = y;
    return (vector);
}

char *rvatoi(int nb)
{
    int size = my_nbr(nb);
    char *res;

    res = malloc(sizeof(char) * size);
    res[size] = '\0';
    while (size--) {
        res[size] = nb % 10 + '0';
        nb /= 10;
    }
    return (res);
}