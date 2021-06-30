/*
** EPITECH PROJECT, 2020
** lib
** File description:
** lib
*/

#include "../include/rpg.h"

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
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
}

int my_nbr(int nb)
{
    int i = 1;
    int ret = 10;
    int limit = 214748364;

    if (nb < 0)
        nb = -nb;
    while (nb >= ret) {
        i++;
        if (ret > limit)
            break;
        ret *= 10;
    }
    return (i);
}