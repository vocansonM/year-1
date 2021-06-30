/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

core_t load_background(core_t core)
{
    if (core.character.vect.x >= 1940 && core.background.x <= 0) {
        core.character.vect.x -= 1940;
        core.background.x += 1;
    }
    if (core.character.vect.y >= 1080 && core.background.y >= 1) {
        core.character.vect.y -= 1080;
        core.background.y -= 1;
    }
    if (core.character.vect.x <= -50 && core.background.x >= 1) {
        core.character.vect.x += 1970;
        core.background.x -= 1;
    }
    if (core.character.vect.y <= -60 && core.background.y <= 0) {
        core.character.vect.y += 1110;
        core.background.y += 1;
    }
    core.background = switch_background(core);
    return (core);
}

background_t switch_background(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0)
        sfSprite_setTexture(core.background.sprite, core.background.x0y0,
        sfFalse);
    if (core.background.x == 1 && core.background.y == 0)
        sfSprite_setTexture(core.background.sprite, core.background.x1y0,
        sfFalse);
    if (core.background.x == 0 && core.background.y == 1)
        sfSprite_setTexture(core.background.sprite, core.background.x0y1,
        sfFalse);
    if (core.background.x == 1 && core.background.y == 1)
        sfSprite_setTexture(core.background.sprite, core.background.x1y1,
        sfFalse);
    if (core.background.x == 5 && core.background.y == 0)
        sfSprite_setTexture(core.background.sprite, core.boss.room_t, sfFalse);
    if (core.background.x == 5 && core.background.y == -1)
        sfSprite_setTexture(core.background.sprite, core.background.x1y0,
        sfFalse);
    sfRenderWindow_drawSprite(core.game.window, core.background.sprite, NULL);
    return (core.background);
}