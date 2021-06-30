/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/sokoban.h"

void keyboard_check(int ch, char *map, int ac, char **av)
{
    if (ch == KEY_UP)
        event_up(map);
    if (ch == KEY_DOWN)
        event_down(map);
    if (ch == KEY_RIGHT)
        event_right(map);
    if (ch == KEY_LEFT)
        event_left(map);
    if (ch == 32) {
        clear();
        refresh();
        open_file(ac, av);
    }
    my_putstr(map);
}

int sokoban(char *map, int ac, char **av)
{
    int ch;
    initscr();
    noecho();
    keypad(stdscr, TRUE);

    while (1) {
        ch = getch();
        clear();
        refresh();
        if (ch == 'q')
            break;
        else keyboard_check(ch, map, ac, av);
    }
    endwin();
    return (0);
}

void help_function(void)
{
    my_putstr("USAGE\n             ./my_sokoban map\n"
    "DESCRIPTION\n             map  file representing the"
    " warehouse map, containing ‘#’ for walls, \n             ‘P’ "
    "for the player, ‘X’ for boxes and ‘O’ for storage locations.\n");

}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help_function();
    else {
        open_file(ac, av);
    }
}