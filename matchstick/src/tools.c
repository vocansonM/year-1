/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** mv
*/

#include "../include/matchstick.h"

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

void my_put_tab(char **tab, int line, int len)
{
    for (int i = 0; i != line; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

int my_getnbr(char const *str)
{
    int abs = 1;
    int i = 0;
    int nb = 0;
    int nb_char = 0;

    while (str[i] != '\0' && (str[i] <= '0' || str[i] > '9')) {
        if (str[i] == '-')
            abs = abs * -1;
        i++;
    }
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0')) {
        if ((nb == 2147483647 && str[i]-48>7 || nb>2147483647 || nb_char>10))
            return (0);
        nb = nb * 10 + (str[i] - '0');
        i++;
        nb_char++;
    }
    return (nb * abs);
}
