/*
** EPITECH PROJECT, 2021
** open_menu
** File description:
** open_menu
*/

#include "../../include/rpg.h"

core_t draw_menus(struct core_s core)
{
    if (core.game.status == 0 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1580 &&
    core.game.pos.x < 1800 && core.game.pos.y > 975 && core.game.pos.y < 1055)
        core.game.status = 1;
    if (core.game.status == 0 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 795 &&
    core.game.pos.x < 1113 && core.game.pos.y > 585 && core.game.pos.y < 685)
        core.game.status = 2;
    if (core.game.status == 2 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 640 && core.game.pos.x < 832
    && core.game.pos.y > 586 && core.game.pos.y < 779) {
        sfSprite_setTexture(core.character.sprite, core.character.sacha,
        sfTrue);
        sfSound_stop(core.music.menu_sound);
        sfSound_play(core.music.game_sound);
        core.game.status = 4;
    }
    core = draw_menus2(core);
    return (core);
}

core_t draw_menus2(struct core_s core)
{
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1415 && core.game.pos.x < 1590
    && core.game.pos.y > 707 && core.game.pos.y < 770) {
        if (core.market.po < 125)
            core = not_enough_gold(core);
        else {
            core.market.fifthhp = 1;
            core.text_potion.fifthhp_nb += 1;
            core.market.po -= 125;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    }
    core = draw_menus3(core);
    return (core);
}

core_t draw_menus3(struct core_s core)
{
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 990 && core.game.pos.x < 1160
    && core.game.pos.y > 707 && core.game.pos.y < 770) {
        if (core.market.po < 100)
            core = not_enough_gold(core);
        else {
            core.market.tenhp = 1;
            core.text_potion.tenhp_nb += 1;
            core.market.po -= 100;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    }
    core = draw_menus4(core);
    return (core);
}

core_t draw_menus4(struct core_s core)
{
    if (core.game.status == 2 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1068
    && core.game.pos.x < 1261
    && core.game.pos.y > 586 && core.game.pos.y < 779) {
        sfSprite_setTexture(core.character.sprite, core.character.joelle,
        sfTrue);
        sfSound_stop(core.music.menu_sound);
        sfSound_play(core.music.game_sound);
        core.game.status = 4;
    }
    if (core.game.status == 2 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 7  && core.game.pos.x < 149
    && core.game.pos.y > 2 && core.game.pos.y < 147)
        core.game.status = 0;
    core = draw_menus5(core);
    return (core);
}

core_t draw_menus5(struct core_s core)
{
    if (core.game.status == 42 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 967 && core.game.pos.x
    < 1480 && core.game.pos.y > 813 && core.game.pos.y < 1027) {
        sfSound_play(core.music.damage_sound);
        if (core.game.part != 4)
            core.enemies.stats.pv -= (core.character.stats.str +
            core.character.stats.weapon_str);
        else core.boss.stats.pv -= (core.character.stats.str +
        core.character.stats.weapon_str);
        core.game.status = 43;
    }
    if (core.game.status == 42 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1519 && core.game.pos.x <
    1887 && core.game.pos.y > 813 && core.game.pos.y < 1027) {
        sfSound_pause(core.music.fight_sound);
        sfSound_play(core.music.game_sound);
        core.character.vect.x -= 51;
        core.game.status = 4;
    } core = draw_menus6(core);
    return (core);
}