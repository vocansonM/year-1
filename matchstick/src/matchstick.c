/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/matchstick.h"

char **remove_matches(int remove_line, int matches, int tab_line, char **board)
{
    int i = 0;
    int j = 0;
    int tmp = matches;

    for (; i != remove_line; i++);
    for (; board[i][j+2] != '\0'; j++);
    for (;board[i][j] != '|'; j--)
        if (board[i][j] == '*')
            return (board);
    for (;matches != 0 && board[i][j] == '|'; j--, matches--)
        board[i][j] = ' ';
    return (board);
}

int game_loop(int tab_line, int max_stick, char **board)
{
    int rm_line = 0;
    int matches = 0;
    int win = 0;

    for (int p = 1; win != 1 && win != 2;
    win = c_win(board, p, tab_line), p++) {
        for (; p == 3; p = 1);
        print_turn(p);
        if (p == 1) {
            rm_line = player_line(rm_line, tab_line);
            if (rm_line == 0)
                break;
            matches = player_matches(matches, max_stick, rm_line, board);
            if (matches == 0)
                break;
        } else if (p == 2) {
            rm_line = ai_line(tab_line, board);
            matches = ai_matches(max_stick, rm_line, board);
        } print_player(matches, rm_line, p);
        board = remove_matches(rm_line, matches, tab_line, board);
        my_put_tab(board, tab_line+2, tab_line*2+1);
    }
    return (win);
}

int main(int ac, char **av)
{
    int tab_line = 0;
    int max_stick = 0;
    int win;

    if (ac != 3)
        return (0);
    tab_line = my_getnbr(av[1]);
    max_stick = my_getnbr(av[2]);
    if (tab_line >= 100 || max_stick >= 100 || tab_line <= 1 || max_stick <= 0)
        return (0);
    if (tab_line == 0 || max_stick == 0)
        return (0);
    win = print_game_board(tab_line, max_stick);
    return (win);
}