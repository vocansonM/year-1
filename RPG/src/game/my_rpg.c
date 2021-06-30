/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** rpg
*/

#include "../../include/rpg.h"

void free_all(struct core_s core)
{
    sound_destroy(core.music);
    text_destroy(core);
    text_destroy2(core);
    sprite_destroy(core);
    sprite_destroy2(core);
    texture_destroy(core);
    texture_destroy2(core);
    sfRenderWindow_destroy(core.game.window);
}

void show_window(struct core_s core)
{
    while (sfRenderWindow_isOpen(core.game.window)) {
        core.game.pos = sfMouse_getPositionRenderWindow(core.game.window);
        while (sfRenderWindow_pollEvent(core.game.window, &core.game.event)) {
            core = event_check(core);
        }
        core = check_status(core);
        core = open_market(core);
        core = first_quest(core);
        core = scnd_quest(core);
        core = third_quest(core);
        core = fourth_quest(core);
        sfRenderWindow_drawSprite(core.game.window,
        core.mouse.handsprite, NULL);
        sfRenderWindow_display(core.game.window);
    }
    free_all(core);
}