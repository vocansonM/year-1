/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../../include/rpg.h"

int main (int ac, char **av)
{
    struct core_s core;

    if (ac == 1) {
        core = init_all(core);
        sfSound_play(core.music.menu_sound);
        show_window(core);
    }
    else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        helpfunc();
        return (0);
    }
    if (ac > 1) {
        my_putstr("too many argument, do :\n"
        "             /my_rpg -h for help\n");
        return (84);
    }
}