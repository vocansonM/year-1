/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/matchstick.h"

int c_win(char **board, int player, int line)
{
    int remaining_matches = 0;

    if (player == 3)
        player = 1;
    for (int i = 0; i != line+2; i++)
        for (int j = 0; j != line*2+1; j++)
            if (board[i][j] == '|')
                remaining_matches++;
    if (remaining_matches == 0 && player == 1) {
        my_putstr("You lost, too bad...\n");
        return (2);
    } else if (remaining_matches == 0 && player == 2) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
}

int error_check_line(int remove_line, int tab_line)
{
    if (remove_line > tab_line || remove_line == 0) {
        my_putstr("Error: this lane is out of range\n");
        return (0);
    } else return (1);
}

int error_check_matches(int matches, int max_stick, int ln_matches)
{
    int i = 0;
    int j = 0;

    if (matches > max_stick) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(max_stick);
        my_putstr(" matches per turn\n");
        return (0);
    } else if (matches == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (0);
    } else if (ln_matches < matches) {
        my_putstr("Error: not enough matches on this line\n");
        return (0);
    } else return (1);
}