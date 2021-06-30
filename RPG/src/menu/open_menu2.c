/*
** EPITECH PROJECT, 2021
** open_menu
** File description:
** open_menu
*/

#include "../../include/rpg.h"

core_t draw_menus6(struct core_s core)
{
    if (core.game.status == 43) {
        sfSound_play(core.music.sword_sound);
        if (core.game.part != 4)
            core.character.stats.pv -= core.enemies.stats.str;
        else core.character.stats.pv -= core.boss.stats.str;
        core.game.status = 42;
    } if (core.game.status == 41 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 717 && core.game.pos.x < 1140
    && core.game.pos.y > 675 && core.game.pos.y < 850) {
        free_all(core);
        sfRenderWindow_close(core.game.window);
    } if (core.game.status == 5 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 128 && core.game.pos.x < 189
    && core.game.pos.y > 554 && core.game.pos.y < 613 &&
    core.text_potion.fivehp_nb > 0) {
        core.text_potion.fivehp_nb -= 1;
        core.character.stats.pv += 5;
        if (core.character.stats.pv > core.character.stats.pvmax)
            core.character.stats.pv = core.character.stats.pvmax;
    } core = draw_menus7(core);
    return (core);
}

core_t draw_menus7(struct core_s core)
{
    if (core.game.status == 5 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 197 && core.game.pos.x
    < 255 && core.game.pos.y > 554 && core.game.pos.y < 613 &&
    core.text_potion.tenhp_nb > 0) {
        core.text_potion.tenhp_nb -= 1;
        core.character.stats.pv += 10;
        if (core.character.stats.pv > core.character.stats.pvmax)
            core.character.stats.pv = core.character.stats.pvmax;
    }
    if (core.game.status == 5 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 265 && core.game.pos.x < 322
    && core.game.pos.y > 554 && core.game.pos.y < 613 &&
    core.text_potion.fifthhp_nb > 0) {
        core.text_potion.fifthhp_nb -= 1;
        core.character.stats.pv += 15;
        if (core.character.stats.pv > core.character.stats.pvmax)
            core.character.stats.pv = core.character.stats.pvmax;
    } core = draw_menus8(core);
    return (core);
}

core_t draw_menus8(struct core_s core)
{
    if (core.background.x == 1 && core.background.y == 0 &&
    sfKeyboard_isKeyPressed(sfKeyE) && core.character.vect.x > 560 &&
    core.character.vect.x < 666 && core.character.vect.y > 310 &&
    core.character.vect.y < 450) {
        core.background.x = 5;
        core.game.part = 3;
    }
    if (core.game.part == 3 && core.game.status == 4 && core.background.x == 5)
    {
        core.character.vect.x = 960;
        core.character.vect.y = 1020;
        core.game.part = 4;
    }
    if (core.game.event.key.code == sfKeyEscape && core.game.status == 4) {
        sfSound_pause(core.music.game_sound);
        core.game.status = 3;
    }
    core = draw_menus9(core);
    return (core);
}

core_t draw_menus9(struct core_s core)
{
    if (core.game.status == 0 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 795 &&
    core.game.pos.x < 1113 && core.game.pos.y > 789 && core.game.pos.y < 880) {
        free_all(core);
        sfRenderWindow_close(core.game.window);
    } if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 16 && core.game.pos.x < 142 && core.game.pos.y > 10
    && core.game.pos.y < 134 && core.game.status == 1)
        core.game.status = 0;
    if (core.game.status == 3 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 776 && core.game.pos.x < 1020
    && core.game.pos.y > 325 && core.game.pos.y < 381) {
        sfSound_play(core.music.menu_sound);
        core.game.status = 0;
    } if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1496 && core.game.pos.x < 1620
    && core.game.pos.y > 150 && core.game.pos.y < 270)
            core.game.status = 4;
    core = draw_menus10(core);
    return (core);
}

core_t draw_menus10(struct core_s core)
{
    if (core.game.status == 55 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 1225 && core.game.pos.x < 1290
    && core.game.pos.y > 400 && core.game.pos.y < 460)
        core.game.status = 56;
    if (core.game.status == 56 && core.game.event.type ==
    sfEvtMouseButtonPressed && core.game.pos.x > 560 && core.game.pos.x < 735
    && core.game.pos.y > 476 && core.game.pos.y < 540) {
        if (core.market.po < 80)
            core = not_enough_gold(core);
        else {
            core.market.axe = 1;
            core.character.stats.weapon_str = 5;
            core.market.po -= 80;
            sfText_setString(core.market.potxt, rvatoi(core.market.po));
            sfRenderWindow_drawText(core.game.window, core.market.potxt, NULL);
        }
    } core = draw_menus11(core);
    return (core);
}