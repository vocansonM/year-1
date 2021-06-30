/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/matchstick.h"

int player_line(int rm_line, int tab_line)
{
    char *line = NULL;
    size_t len = 256;

    for (int error_line = 0; error_line != 1;) {
            my_putstr("Line: ");
            if (getline(&line, &len, stdin) != -1)
                rm_line = my_getnbr(line);
            else if (getline(&line, &len, stdin) == -1)
                return (0);
            error_line = error_check_line(rm_line, tab_line);
        }
        return (rm_line);
}

int player_matches(int matches, int max_stick, int rm_line, char **board)
{
    char *line = NULL;
    size_t len = 256;
    int ln_matches = 0;

    for (int j = 0, i = rm_line; board[i][j] != '\0'; j++)
            if (board[i][j] == '|')
                ln_matches++;
    for (int error_matches = 0; error_matches != 1;) {
            my_putstr("Matches: ");
            if (getline(&line, &len, stdin) != -1)
                matches = my_getnbr(line);
            else if (getline(&line, &len, stdin) == -1)
                return (0);
            error_matches = error_check_matches(matches, max_stick, ln_matches);
        }
        return (matches);
}

int ai_line(int tab_line, char **board)
{
    int remaining_matches = 0;
    int tmp = 0;
    int line = 0;

    for (int i = 0; i != tab_line+2; i++) {
        for (int j = 0; j != tab_line*2+1; j++)
            if (board[i][j] == '|')
                remaining_matches++;
        if (tmp < remaining_matches) {
            tmp = remaining_matches;
            line = i;
        }
        remaining_matches = 0;
    }
    return (line);
}

int ai_matches(int max_stick, int rm_line, char **board)
{
    int i = rm_line;
    int matches = 0;

    for (int j = 0; board[i][j] != '\0'; j++)
        if (board[i][j] == '|')
            matches++;
    if (matches <= max_stick)
        return (matches);
    else return (max_stick);
}