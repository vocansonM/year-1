/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** mv
*/

#include "../include/generator.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0){
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void put_tab(struct map_s map)
{
    int i;

    for (i = 0; i != map.y_len-1; i++){
        my_putstr(map.tab[i]);
        my_putchar('\n');
    }
    my_putstr(map.tab[i]);
}

int my_atoi_str(char *str)
{
    int nbr = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + (str[i] - '0');
    return (nbr);
}