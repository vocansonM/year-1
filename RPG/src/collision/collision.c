/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

int collision_right(core_t core)
{
    if (xoyor(core) == 1)
        return (1);
    if (xoyixiyor(core) == 1)
        return (1);
    if (xiyir(core) == 1)
        return (1);
    if (boss_right(core) == 1)
        return (1);
    return (0);
}

int collision_left(core_t core)
{
    if (xoyol(core) == 1)
        return (1);
    if (xoyixiyol(core) == 1)
        return (1);
    if (boss_left(core) == 1)
        return (1);
    return (0);
}

int collision_up(core_t core)
{
    if (xoyou(core) == 1)
        return (1);
    if (xiyoxiyiu(core) == 1)
        return (1);
    if (xoyiu(core) == 1)
        return (1);
    if (boss_up(core) == 1)
        return (1);
    return (0);
}

int collision_down(core_t core)
{
    if (xoyod(core) == 1)
        return (1);
    if (xoyixiyod(core) == 1)
        return (1);
    if (xiyid(core) == 1)
        return (1);
    if (boss_down(core) == 1)
        return (1);
    return (0);
}
