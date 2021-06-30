/*
** EPITECH PROJECT, 2021
** matchstick.c
** File description:
** matchstick
*/

#include "../include/solver.h"

void put_2d_array(char **array, map_t map)
{
    int i = 0;
    for (i = 0; i != map.y_len-1; i++){
        my_putstr(array[i]);
        my_putchar('\n');
    }
    my_putstr(array[i]);
}