/*
** EPITECH PROJECT, 2021
** string_compare.c
** File description:
** compare_two_strings
*/

#include "../include/generator.h"

int string_compare(char *to_compare, char *compared)
{
    for (int i = 0; to_compare[i] != '\0'; i++)
        if (to_compare[i] != compared[i])
            return (-1);
    return (0);
}