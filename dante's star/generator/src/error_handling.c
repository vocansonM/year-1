/*
** EPITECH PROJECT, 2021
** dante
** File description:
** dante
*/

#include "../include/generator.h"

int error(int ac, char **av)
{
    struct map_s map;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        my_putstr("Type: ./generator x y [type of maze] to run the program\n");
        return (0);
    }
    else if (ac == 1){
        my_putstr("Type: ./generator -h to get information about the usage\n");
        return (0);
    }
    else{
        my_putstr("The game needs 3 arguments to start: ");
        my_putstr("x and y must be positive numbers\n");
        return (0);
    }
}

int check_input(char *str)
{
    for (int i = 0; str[i]; i++){
        if (str[i] >= '0' && str[i] <= '9')
            return (1);
        else {
            return (0);
            break;
        }
    }
}