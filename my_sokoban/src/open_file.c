/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** MV
*/

#include "../include/sokoban.h"

int save_file_to_str(int ac, char **av, int len)
{
    char *map = (char *) malloc((len+1) * sizeof(char));
    int fd = open(av[1], O_RDONLY);
    char c;
    int i = 0;
    int j = 0;

    while ((i = read(fd, &c, sizeof(c))) > 0) {
        map[j] = c;
        j++;
    }
    close (fd);
    sokoban(map, ac, av);
    free(map);
    return (0);
}

int open_file(int ac, char **av)
{
    char c;
    int fd = open(av[1], O_RDONLY);
    int i;
    int len = 0;

    if (fd == -1) {
        my_putstr("error during open\n");
        return (-1);
    }
    while ((i = read(fd, &c, sizeof(c))) > 0) {
        len++;
    }
    close(fd);
    save_file_to_str(ac, av, len);
    return (0);
}