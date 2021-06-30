/*
** EPITECH PROJECT, 2021
** open_menu
** File description:
** open_menu
*/

#include "../../include/rpg.h"

core_t draw_menus11(struct core_s core)
{
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 990 && core.game.pos.x < 1160
    && core.game.pos.y > 476 && core.game.pos.y < 540) {
        if (core.market.po < 100)
            core = not_enough_gold(core);
        else {
            core.market.sword = 1;
            core.character.stats.weapon_str = 7;
            core.market.po -= 100;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    }
    core = draw_menus12(core);
    return (core);
}

core_t draw_menus12(struct core_s core)
{
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1415 && core.game.pos.x < 1590
    && core.game.pos.y > 476 && core.game.pos.y < 540) {
        if (core.market.po < 50)
            core = not_enough_gold(core);
        else {
            core.market.boots = 1;
            core.character.vect.x = 1640;
            core.character.vect.y = 670;
            core.character.stats.speed = 10;
            my_put_nbr(core.character.stats.speed);
            core.market.po -= 50;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    }
    core = draw_menus13(core);
    return (core);
}

core_t draw_menus13(struct core_s core)
{
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 560 && core.game.pos.x < 735
    && core.game.pos.y > 707 && core.game.pos.y < 770) {
        if (core.market.po < 50)
            core = not_enough_gold(core);
        else {
            core.market.fivehp = 1;
            core.text_potion.fivehp_nb += 1;
            core.market.po -= 50;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    }
    core = draw_menus14(core);
    return (core);
}

core_t draw_menus14(struct core_s core)
{
    if (core.game.status == 3 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 776 && core.game.pos.x < 1005
    && core.game.pos.y > 517 && core.game.pos.y < 574) {
        free_all(core);
        sfRenderWindow_close(core.game.window);
    } if (core.game.status == 3 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 776 && core.game.pos.x < 1147
    && core.game.pos.y > 702 && core.game.pos.y < 759) {
        sfSound_play(core.music.game_sound);
        core.game.status = 4;
    }
    if (core.game.status == 4 && core.game.event.key.code == sfKeyI)
        core.game.status = 5;
    if (core.game.status == 5 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 705 && core.game.pos.x
    < 751 && core.game.pos.y > 251 && core.game.pos.y < 296)
        core.game.status = 4;
    core = draw_menus15(core);
    return (core);
}

core_t draw_menus15(struct core_s core)
{
    if (core.game.status == 0 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 0 && core.game.pos.x < 256
    && core.game.pos.y > 866 && core.game.pos.y < 1079)
        core.game.status = 6;
    return (core);
}