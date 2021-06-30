/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/sokoban.h"

void event_left(char *map)
{
    int i = getppos(map);

    if (map[i-1] != '#' && map[i-1] != 'X') {
        map[i-1] = map[i];
        map[i] = ' ';
    }
    if (map[i-1] == 'X' && map[i-2] == ' ') {
        map[i-2] = map[i-1];
        map[i-1] = map[i];
        map[i] = ' ';
    }
    if (map[i-1] == 'X' && map[i-2] == 'O') {
        map[i-2] = map[i-1];
        map[i-1] = map[i];
        map[i] = ' ';
    }
}

void event_right(char *map)
{
    int i = getppos(map);

    if (map[i+1] != '#' && map[i+1] != 'X') {
        map[i+1] = map[i];
        map[i] = ' ';
    }
    if (map[i+1] == 'X' && map[i+2] == ' ') {
        map[i+2] = map[i+1];
        map[i+1] = map[i];
        map[i] = ' ';
    }
    if (map[i+1] == 'X' && map[i+2] == 'O') {
        map[i+2] = map[i+1];
        map[i+1] = map[i];
        map[i] = ' ';
    }
}

void event_up(char *map)
{
    int p = getppos(map);
    int i = get_xup(map);
    int j = get_xupper(map);

    if (map[i] != '#' && map[i] != 'X') {
        map[i] = map[p];
        map[p] = ' ';
    }
    if (map[i] == 'X' && map[j] == ' ') {
        map[j] = map[i];
        map[i] = map[p];
        map[p] = ' ';
    }
    if (map[i] == 'X' && map[j] == 'O') {
        map[j] = map[i];
        map[i] = map[p];
        map[p] = ' ';
    }
}

void event_down(char *map)
{
    int p = getppos(map);
    int i = get_xdown(map);
    int j = get_xdowner(map);

    if (map[i] != '#' && map[i] != 'X') {
        map[i] = map[p];
        map[p] = ' ';
    }
    if (map[i] == 'X' && map[j] == ' ') {
        map[j] = map[i];
        map[i] = map[p];
        map[p] = ' ';
    }
    if (map[i] == 'X' && map[j] == 'O') {
        map[j] = map[i];
        map[i] = map[p];
        map[p] = ' ';
    }
}