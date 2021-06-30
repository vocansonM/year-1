/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/solver.h"

int main(int ac, char **av)
{
    struct map_s map;
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (-1);
    map = solver_loop(map, av);
    if (check_unsolvable(map) == -1){
        my_putstr("no solution found\n");
        return (-1);
    }
    else
        put_2d_array(remove_blank(map), map);
    return (0);
}

struct map_s solver_loop(struct map_s map, char **av)
{
    map = load_map(av[1]);
    map.i = 0;
    map.j = 0;
    map.tab[0][0] = 'o';
    map.tab[map.y_len - 1][map.y_len - 1] = '*';
    while (solver_check(map) != 0 && check_unsolvable(map) != -1){
        if (check_path(map) > 0)
            map = add_o(map);
        else
            map = remove_o(map);
    }
    return (map);
}