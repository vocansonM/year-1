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

core_t check_status(struct core_s core)
{
    if (core.game.status == 0) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window,
        core.menu.menu_s, NULL);
        if (core.game.pos.x > 795 && core.game.pos.x < 1113
        && core.game.pos.y > 789 && core.game.pos.y < 880)
            sfRenderWindow_drawSprite(core.game.window, core.button.quit_s,
            sfFalse);
        if (core.game.pos.x > 795 && core.game.pos.x < 1113
        && core.game.pos.y > 585 && core.game.pos.y < 685)
            sfRenderWindow_drawSprite(core.game.window, core.button.start_s,
            sfFalse);
        if (core.game.pos.x > 1580 && core.game.pos.x < 1800
        && core.game.pos.y > 975 && core.game.pos.y < 1055)
            sfRenderWindow_drawSprite(core.game.window, core.button.key_s,
            sfFalse);
    }
    core = check_status2(core);
    return (core);
}

core_t check_status2(struct core_s core)
{
    if (core.game.status == 3) {
        core = load_background(core);
        sfRenderWindow_drawSprite(core.game.window,
        core.settings.pause_s, NULL);
    }
    if (core.game.status == 1) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window,
        core.settings.settings_s, NULL);
        if (core.game.pos.x > 16 && core.game.pos.x < 142
        && core.game.pos.y > 10 && core.game.pos.y < 134 )
            sfRenderWindow_drawSprite(core.game.window,
            core.button.arrow_s, sfFalse);
    }
    if (core.game.status == 55) {
        core = load_background(core);
        sfRenderWindow_drawSprite(core.game.window, core.market.error_s,
        sfFalse);
    } core = check_status3(core);
    return (core);
}

core_t check_status3(struct core_s core)
{
    if (core.game.status == 2) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window, core.settings.selec_s,
        NULL);
        if (core.game.pos.x > 1068 && core.game.pos.x < 1261 &&
        core.game.pos.y > 586 && core.game.pos.y < 779) {
            core.character.fight_status = 2;
            sfRenderWindow_drawSprite(core.game.window, core.button.joelle_s,
            sfFalse);
        } if (core.game.pos.x > 640 && core.game.pos.x < 832 &&
        core.game.pos.y > 586 && core.game.pos.y < 779) {
            core.character.fight_status = 1;
            sfRenderWindow_drawSprite(core.game.window, core.button.sasha_s,
            sfFalse);
        } if (core.game.pos.x > 16 && core.game.pos.x < 142 &&
        core.game.pos.y > 10 && core.game.pos.y < 134 )
            sfRenderWindow_drawSprite(core.game.window, core.button.arrow_s,
            sfFalse);
    } core = check_status4(core);
    return (core);
}

core_t check_status4(struct core_s core)
{
    if (core.game.status == 4) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        core = start_game(core);
        if (core.background.x == 0 && core.background.y == 0 &&
        core.character.vect.y >= 800 && core.character.vect.x >= 530 &&
        core.character.vect.x <= 604 && core.game.part == 1)
            core.game.status = 42;
    } if (core.game.status == 4 && core.game.part == 2 && core.background.x == 0
    && core.background.y == 1)
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sprite,
        sfFalse);
    if (core.game.status == 5) {
        core = load_background(core);
        sfRenderWindow_drawSprite(core.game.window,
        core.settings.inv_s, NULL);
        draw_items(core);
        draw_potions(core);
        draw_stats(core);
    } core = check_status5(core);
    return (core);
}

core_t check_status5(struct core_s core)
{
    if (core.game.status == 42 && core.game.part == 1)
        core = fight_start(core);
    if ((core.game.status == 42 && core.game.part == 2)
    || (core.game.status == 42 && core.game.part == 6)
    || (core.game.status == 42 && core.game.part == 10))
        core = fight_start2(core);
    if (core.game.status == 42 && core.game.part == 4)
        core = fight_start3(core);
    if (core.game.status == 41) {
        sfRenderWindow_clear(core.game.window, sfWhite);
        sfRenderWindow_drawSprite(core.game.window, core.settings.lose_s,
        sfFalse);
    } if (core.game.status == 4 && core.background.x == 5) {
        core = load_background(core);
        core = boss_room(core);
        character_move(core);
    } core = check_status6(core);
    return (core);
}