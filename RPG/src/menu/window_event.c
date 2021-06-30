/*
** EPITECH PROJECT, 2021
** window_event
** File description:
** window_event
*/

#include "../../include/rpg.h"

core_t event_check(struct core_s core)
{
    sfVector2f mousesprite = {500, 500};

    if (core.game.event.type == sfEvtClosed) {
        free_all(core);
        sfRenderWindow_close(core.game.window);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft))
        sfSound_play(core.music.click_sound);
    if (core.game.event.type == sfEvtMouseMoved) {
        mousesprite.x = core.game.event.mouseMove.x;
        mousesprite.y = core.game.event.mouseMove.y;
        sfSprite_setPosition(core.mouse.handsprite, mousesprite);
    }
    if (core.game.event.type == sfEvtKeyPressed && core.game.status == 4) {
        core.character = player_move(core);
    }
    core = draw_menus(core);
    return (core);
}