/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/generator.h"

void imperfect(struct map_s map, int ac, char **av)
{
    if (check_input(av[1]) != 0 && check_input(av[2]) != 0)
        if (my_atoi_str(av[1]) > 0 && my_atoi_str(av[2]) > 0){
            map.x_len = my_atoi_str(av[1]);
            map.y_len = my_atoi_str(av[2]);
            map.tab = malloc_map(map);
            map.tab = fill_tab(map);
            put_tab(map);
            free_map(map);
        }
}

void perfect(struct map_s map, int ac, char **av)
{
    if (check_input(av[1]) != 0 && check_input(av[2]) != 0)
        if (my_atoi_str(av[1]) > 0 && my_atoi_str(av[2]) > 0)
            if (string_compare("[perfect]", av[3]) != -1 ||
            string_compare("perfect", av[3]) != -1){
                map.x_len = my_atoi_str(av[1]);
                map.y_len = my_atoi_str(av[2]);
                map.tab = malloc_map(map);
                map.tab = fill_tab_perfect(map);
                put_tab(map);
                free_map(map);
            }
}

int main(int ac, char **av)
{
    struct map_s map;
    if (ac == 3){
        imperfect(map, ac, av);
        return (0);
    }
    if (ac == 4){
        perfect (map, ac, av);
        return (0);
    }
    else
        return (84);
}
