/*
** EPITECH PROJECT, 2021
** str_to_word_array.c
** File description:
** str_to_word_array
*/

#include "../include/solver.h"

int separator(char c, char tweak)
{
    if (c == tweak || c == '\0')
        return (1);
    else
        return (0);
}

int get_word_number(char const *str, char tweak)
{
    int res = 0;
    int is_checking = 0;
    for (int i = 0; str[i]; i++){
        if (separator(str[i], tweak) == 0 && !is_checking) {
            res += 1;
            is_checking = 1;
            }
        else if (is_checking && separator(str[i], tweak) == 1)
            is_checking = 0;
            }
    return (res);
}

int word_len(char const *str, char tweak, int i)
{
    int len = 0;
    while (str[i]) {
        while (separator(str[i], tweak) == 0){
            len++;
            i += 1;
            }
        if (separator(str[i], tweak) == 1 && len != 0)
            return (len);
        i += 1;
        }
    return (len);
}

char *fill_tab(char const *str, char tweak, int *pos)
{
    int wordlen = word_len(str, tweak, *pos);
    int old_pos = *pos;
    char *result = malloc(sizeof(char) * wordlen + 1);
    int i = 0;
    while (str[*pos]){
        while (separator(str[*pos], tweak) == 0){
            result[i] = str[*pos];
            i++;
            *pos += 1;
            }
        if (i != 0)
            break;
        *pos += 1;
        }
    result[i] = '\0';
    return (result);
}

char **tweak_buffer_into_arrays(char const *str, char tweak)
{
    int nb_word = get_word_number(str, tweak);
    char **tab = malloc(sizeof(char *) * (nb_word + 1));
    int pos = 0;
    for (int j = 0; j != nb_word; j++)
        tab[j] = fill_tab(str, tweak, &pos);
    tab[nb_word] = NULL;
    return (tab);
}