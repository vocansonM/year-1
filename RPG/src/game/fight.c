/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

core_t fight_start(core_t core)
{
    core = draw_fight(core);
    if (core.character.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        core.game.status = 41;
    }
    if (core.enemies.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        sfSound_play(core.music.game_sound);
        core.enemies.vect.x += 2000;
        sfSprite_setPosition(core.enemies.sword_s, core.enemies.vect);
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sword_s,
        sfFalse);
        core.market.po += 250;
        sfText_setString(core.market.potxt, rvatoi(core.market.po));
        core.enemies.stats.pv = 10;
        core.character = win(core.character);
        core.game.part = 2;
        core.game.status = 4;
    }
    return (core);
}

core_t fight_start2(core_t core)
{
    core = draw_fight(core);
    if (core.character.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        core.game.status = 41;
    }
    if (core.enemies.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        sfSound_play(core.music.game_sound);
        core.enemies.vect_e.x += 2000;
        sfSprite_setPosition(core.enemies.sprite, core.enemies.vect_e);
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sprite,
        sfFalse);
        core.market.po += 250;
        sfText_setString(core.market.potxt, rvatoi(core.market.po));
        core.enemies.stats.pv = 10;
        core.character = win(core.character);
        core.game.part += 4;
        core.game.status = 4;
    }
    return (core);
}

core_t fight_start3(core_t core)
{
    core = draw_fight(core);
    if (core.character.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        core.game.status = 41;
    }
    if (core.boss.stats.pv <= 0) {
        sfSound_stop(core.music.fight_sound);
        sfSound_play(core.music.game_sound);
        core.boss.vect.x += 2000;
        sfSprite_setPosition(core.boss.sprite, core.boss.vect);
        sfRenderWindow_drawSprite(core.game.window, core.boss.sprite, sfFalse);
        core.market.po += 1000;
        sfText_setString(core.market.potxt, rvatoi(core.market.po));
        core.character = win(core.character);
        core.game.status = 10;
    }
    return (core);
}

character_t win(character_t character)
{
    character.stats.xp += 6;
    if (character.stats.xp >= character.stats.xp_up) {
        character.stats.xp -= character.stats.xp_up;
        character.stats.lvl += 1;
        character.stats.pv += 5;
        character.stats.pvmax += 5;
        character.stats.str += 2;
        character.stats.xp_up += 3;
    }
    return (character);
}