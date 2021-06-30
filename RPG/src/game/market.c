/*
** EPITECH PROJECT, 2021
** market.c
** File description:
** market.c
*/

#include "../../include/rpg.h"

core_t not_enough_gold(struct core_s core)
{
    core.game.status = 55;
    return (core);
}

core_t open_market(core_t core)
{
    if (core.background.x == 0 && core.background.y == 1 &&
    sfKeyboard_isKeyPressed(sfKeyE) && core.character.vect.x > 1555
    && core.character.vect.x < 1845 && core.character.vect.y > 500 &&
    core.character.vect.y < 700)
            core.game.status = 56;
    if (core.game.status == 56) {
        core = load_background(core);
        sfRenderWindow_drawSprite(core.game.window, core.market.market_s, NULL);
        sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
    }
    return (core);
}