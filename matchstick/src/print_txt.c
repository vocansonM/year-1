/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/matchstick.h"

void print_player(int matches, int rm_line, int p)
{
    if (p == 1) {
        my_putstr("Player removed ");
        my_put_nbr(matches);
        my_putstr(" match(es) from line ");
        my_put_nbr(rm_line);
        my_putchar('\n');
    } else if (p == 2) {
        my_putstr("AI removed ");
        my_put_nbr(matches);
        my_putstr(" match(es) from line ");
        my_put_nbr(rm_line);
        my_putchar('\n');
    }
}

void print_turn(int p)
{
    if (p == 1)
        my_putstr("\nYour turn:\n");
    else if (p == 2)
        my_putstr("\nAI's turn...\n");
}