/*
** EPITECH PROJECT, 2021
** open_menu
** File description:
** open_menu
*/

#include "../../include/rpg.h"

// status :
// 0 menu
// 1 keys
// 2 character selection
// 3 pause
// 4 game
// 5 inventory
// 6 settings
// 10 victoire
// 41 defaite
// 42 combat
// 45 boss
// 55 pas assez d'or
// 56 shop

core_t check_status6(struct core_s core)
{
    if (core.game.status == 10) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window, core.menu.win_s, sfFalse);
        if (core.game.event.type == sfEvtMouseButtonPressed &&
        core.game.pos.x > 725 && core.game.pos.x < 1140 &&
        core.game.pos.y > 676 && core.game.pos.y < 851) {
            free_all(core);
            sfRenderWindow_close(core.game.window);
        }
    } if (core.game.status == 6) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window, core.settings.vlm_s,
        sfFalse);
        core = check_status_vlm(core);
        core = check_status_vlm2(core);
        core = check_status_vlm3(core);
        core = check_status_ips(core);
    } core = check_status7(core);
    return (core);
}

core_t check_status7(struct core_s core)
{
    if (core.game.status == 4 && core.game.part == 6 && core.background.x == 1
    && core.background.y == 1) {
        core.enemies.vect_e.x = 400;
        sfSprite_setPosition(core.enemies.sprite, core.enemies.vect_e);
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sprite,
        sfFalse);
    }
    if (core.game.status == 4 && core.game.part == 10 && core.background.x == 1
    && core.background.y == 0) {
        core.enemies.vect_e.x = 800;
        core.enemies.vect_e.y = 700;
        sfSprite_setPosition(core.enemies.sprite, core.enemies.vect_e);
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sprite,
        sfFalse);
    }
    return (core);
}