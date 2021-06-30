/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/matchstick.h"

int matches_left(char **board, int tab_line)
{
    int matches = 0;
    for (int i = 1; i != tab_line+2; i++)
        for (int j = 0; j != tab_line*2+1; j++)
            if (board[i][j] == '|')
                matches++;
    return (matches);
}

char **fill_board(char **board, int tab_line, int tab_line_len)
{
    int line = tab_line + 2;
    int right = tab_line_len/2;
    int left = tab_line_len/2;

    for (int i = 0; i != line; i++) {
        for (int j = 0; j != tab_line_len; j++) {
            if (i == 0 || i == line-1 || j == 0 || j == tab_line_len-1)
                board[i][j] = '*';
            else if (i > 0 && i < line-1)
                if (j <= right && j >= left)
                    board[i][j] = '|';
            else board[i][j] = ' ';
        }
        if (i > 0) {
            right++;
            left--;
        }
    } my_put_tab(board, tab_line+2, tab_line_len);
    return (board);
}

int print_game_board(int tab_line, int max_stick)
{
    int i;
    int tab_line_len = 0;
    char **board = malloc((sizeof(char *) * tab_line+2) + 1);
    int tmp = 0;
    int win;

    tab_line_len = tab_line + tab_line + 1;
    for (i = 0; i != tab_line + 2; i++)
        board[i] = malloc(sizeof(char) * tab_line_len + 1);
    board[i] = NULL;
    board = fill_board(board, tab_line, tab_line_len);
    win = game_loop(tab_line, max_stick, board);
    free(board);
    return (win);
}