/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** mv
*/

#include "../include/solver.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

void my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}