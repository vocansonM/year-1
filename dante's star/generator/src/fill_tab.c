/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/generator.h"

char **fill_tab(struct map_s map)
{
    for (int i = 0; i != map.y_len; i++)
        for (int j = 0; j != map.x_len; j++)
            map.tab[i][j] = 'X';
    for (int i = 0; i != map.y_len; i++)
        if (i % 2 == 0)
            for (int j = 0; j != map.x_len; j++)
                map.tab[i][map.x_len - 1] = '*';
    for (int j = 0; j != map.x_len; j++)
        map.tab[0][j] = '*';
    map.tab[map.y_len - 1][map.x_len - 1] = '*';
    map.tab = generate_maze(map);
    return (map.tab);
}

char **generate_maze(struct map_s map)
{
    srand((unsigned) time(&map.t));
    for (map.i = 1; map.i != map.y_len; map.i++){
        if (map.i % 2 == 0)
            for (map.j = 0; map.j != map.x_len; map.j++)
                map = generate_final(map);
        map.nb = 0;
    } return (map.tab);
}

struct map_s generate(struct map_s map)
{
    if (map.nb == 0 && map.j + 1 != map.x_len){
        map.nb = rand() % (map.x_len / 2) + 1;
        map.tmp = rand() % map.nb + map.j;
        map.tab[map.i][map.j + 1] = 'X';
        if (map.j != 0) {
            map.j++;
            map.tmp++;
        }
        if (map.tmp > map.x_len - 1)
            map.tmp = map.x_len - 1;
    }
    if (map.nb >= 1){
        map.tab[map.i][map.j] = '*';
        map.nb--;
    }
    return (map);
}

struct map_s generate_final(struct map_s map)
{
    map = generate(map);
    if (map.tab[map.i - 2][map.tmp] != 'X'){
        map.tab[map.i - 1][map.tmp] = '*';
        if (map.i < map.y_len-1)
            map.tab[map.i + 1][map.tmp] = '*';
    }
    else if (map.tab[map.i - 1][map.tmp - 2] != '*' &&
    map.tab[map.i][map.tmp - 1] != 'X'){
        map.tab[map.i - 1][map.tmp - 1] = '*';
        if (map.i < map.y_len-1)
            map.tab[map.i + 1][map.tmp - 1] = '*';
    }
    else if (map.tab[map.i - 1][map.tmp + 2] != '*' &&
    map.tab[map.i][map.tmp + 1] != 'X' && map.tab[map.i][map.tmp + 1] != '\0'){
            map.tab[map.i - 1][map.tmp  + 1] = '*';
            if (map.i < map.y_len - 1)
                map.tab[map.i + 1][map.tmp  + 1] = '*';
    }
    return (map);
}