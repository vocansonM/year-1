/*
** EPITECH PROJECT, 2021
** move
** File description:
** move
*/

#include "../../include/rpg.h"

character_t move_right(core_t core)
{
    int max_value = 240;
    int offset = 51;
    core.character.rect.top = 179;

    if (sfClock_getElapsedTime(core.character.clock).microseconds/100000 >= 1) {
        core.character.rect.left += offset;
        if (core.character.rect.left >= max_value)
            core.character.rect.left = 88;
        sfClock_restart(core.character.clock);
    }
    character_move(core);
    core.character.vect = sfSprite_getPosition(core.character.sprite);
    if (collision_right(core) == 0)
        core.character.vect.x += core.character.stats.speed;
    sfSprite_setPosition(core.character.sprite, core.character.vect);
    return (core.character);
}

character_t move_left(core_t core)
{
    int max_value = 240;
    int offset = 51;
    core.character.rect.top = 121;

    if (sfClock_getElapsedTime(core.character.clock).microseconds/100000 >= 1) {
        core.character.rect.left += offset;
        if (core.character.rect.left >= max_value)
            core.character.rect.left = 88;
        sfClock_restart(core.character.clock);
    }
    character_move(core);
    core.character.vect = sfSprite_getPosition(core.character.sprite);
    if (collision_left(core) == 0)
        core.character.vect.x -= core.character.stats.speed;
    sfSprite_setPosition(core.character.sprite, core.character.vect);
    return (core.character);
}

character_t move_up(core_t core)
{
    int max_value = 240;
    int offset = 51;
    core.character.rect.top = 1;

    if (sfClock_getElapsedTime(core.character.clock).microseconds/100000 >= 1) {
        core.character.rect.left += offset;
        if (core.character.rect.left >= max_value)
            core.character.rect.left = 88;
        sfClock_restart(core.character.clock);
    }
    character_move(core);
    core.character.vect = sfSprite_getPosition(core.character.sprite);
    if (collision_up(core) == 0)
        core.character.vect.y -= core.character.stats.speed;
    sfSprite_setPosition(core.character.sprite, core.character.vect);
    return (core.character);
}

character_t move_down(core_t core)
{
    int max_value = 240;
    int offset = 51;
    core.character.rect.top = 61;

    if (sfClock_getElapsedTime(core.character.clock).microseconds/100000 >= 1) {
        core.character.rect.left += offset;
        if (core.character.rect.left >= max_value)
            core.character.rect.left = 88;
        sfClock_restart(core.character.clock);
    }
    character_move(core);
    core.character.vect = sfSprite_getPosition(core.character.sprite);
    if (collision_down(core) == 0)
        core.character.vect.y += core.character.stats.speed;
    sfSprite_setPosition(core.character.sprite, core.character.vect);
    return (core.character);
}