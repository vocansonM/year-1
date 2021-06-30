/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/sokoban.h"

int getppos(char *map)
{
    int p = 0;

    while (map[p] != 'P')
        p++;
    return (p);
}

int get_xup(char *map)
{
    int p = 0;
    int x = 0;

    while (map[p] != 'P')
        p++;
    while (map[p+1] != '\n') {
        x++;
        p--;
    }
    while (map[p] != '\n') {
        if (p-1 == 0)
            return (0);
        p--;
    }
    while (x != 0) {
        p++;
        x--;
    }
    return (p-1);
}

int get_xdown(char *map)
{
    int p = 0;
    int x = 0;

    while (map[p] != 'P')
        p++;
    while (map[p] != '\n') {
        x++;
        p--;
    }
    p++;
    while (map[p] != '\n')
        p++;
    while (x != 0) {
        p++;
        x--;
    }
    return (p);
}

int get_xupper(char *map)
{
    int p = getppos(map);
    int x = 0;

    while (map[p+1] != '\n') {
        x++;
        p--;
    } while (map[p] != '\n') {
        if (p-1 == 0)
            return (0);
        p--;
    }
    p--;
    while (map[p] != '\n') {
        if (p-1 == 0)
            return (0);
        p--;
    } while (x != 0) {
        p++;
        x--;
    }
    return (p-1);
}

int get_xdowner(char *map)
{
    int p = 0;
    int x = 0;

    while (map[p] != 'P')
        p++;
    while (map[p] != '\n') {
        x++;
        p--;
    }
    p++;
    while (map[p] != '\n')
        p++;
    p++;
    while (map[p] != '\n')
        p++;
    while (x != 0) {
        p++;
        x--;
    }
    return (p);
}