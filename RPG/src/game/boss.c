/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

core_t boss_fight(core_t core)
{
    if (core.character.vect.x > 935 && core.character.vect.x < 1100 &&
    core.character.vect.y > 300 && core.character.vect.y < 500) {
            sfSound_pause(core.music.game_sound);
            sfSound_play(core.music.fight_sound);
            core.game.status = 42;
        }
    return (core);
}

core_t boss_room(core_t core)
{
    sfRenderWindow_clear(core.game.window, sfBlack);
    sfRenderWindow_drawSprite(core.game.window, core.boss.room_s, NULL);
    sfRenderWindow_drawSprite(core.game.window, core.boss.sprite, NULL);
    character_move(core);
    core = boss_fight(core);
    return (core);
}