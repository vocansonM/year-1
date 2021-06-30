/*
** EPITECH PROJECT, 2021
** file_cpy.c
** File description:
** file_copy
*/

#include "../include/solver.h"

off_t file_size(const char *filename)
{
    struct stat st;
    if (stat(filename, &st) == 0)
        return (st.st_size);
    else
        return (-1);
}

int my_strlen(const char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strdup(char const *src)
{
    char *str;
    int c;
    str = malloc((my_strlen(src) + 1) * sizeof(*str));
    if (str == 0)
        return (0);
    for (c = 0; src[c] != '\0'; c++)
        str [c] = src [c];
    str[c] = '\0';
    return (str);
}

char *buffer(char const *filepath)
{
    struct stat st;
    int fd = open(filepath, O_RDONLY);
    int size;
    if (stat(filepath, &st) == 0)
        size = st.st_size;
    char *buffer = malloc(size + 1);
    int find_end = read(fd, buffer, size);
    buffer[find_end - 1] = '\0';
    if (find_end > 0)
        return (buffer);
    close(fd);
}

struct map_s load_map(char const *filepath)
{
    struct map_s map;
    int fd = open(filepath, O_RDONLY);
    char *content = buffer(filepath);
    map.tab = tweak_buffer_into_arrays(content, '\n');
    map = get_max_value(map.tab);
    return (map);
    close(fd);
}