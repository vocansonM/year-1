/*
** EPITECH PROJECT, 2021
** play
** File description:
** play
*/

#include "../../include/rpg.h"

core_t start_game(core_t core)
{
    core = load_background(core);
    if (core.game.part == 1 && core.background.x == 0 &&
    core.background.y == 0) {
        sfRenderWindow_drawSprite(core.game.window, core.enemies.sword_s,
        NULL);
        if (core.character.vect.y+58 >= core.enemies.vect.y &&
        core.character.vect.x+45 > core.enemies.vect.x
        && core.character.vect.x < core.enemies.vect.x+45 &&
        core.character.vect.y <= core.enemies.vect.y+58) {
            core = enemie_found(core);
        }
    } else if (core.game.part == 2 || core.game.part == 6
    || core.game.part == 10) {
        if (core.character.vect.y+58 >= core.enemies.vect_e.y &&
        core.character.vect.x > core.enemies.vect_e.x
        && core.character.vect.x < core.enemies.vect_e.x+100 &&
        core.character.vect.y <= core.enemies.vect_e.y+100) {
            core = enemie_found(core);
        }
    } character_move(core);
    return (core);
}

void character_move(core_t core)
{
    sfSprite_setTextureRect(core.character.sprite, core.character.rect);
    sfSprite_setPosition(core.character.sprite, core.character.vect);
    sfRenderWindow_drawSprite(core.game.window, core.character.sprite, NULL);
}

character_t player_move(core_t core)
{
    if (core.game.event.key.code == sfKeyRight || core.game.event.key.code ==
    sfKeyD)
        core.character = move_right(core);
    if (core.game.event.key.code == sfKeyLeft || core.game.event.key.code ==
    sfKeyQ)
        core.character = move_left(core);
    if (core.game.event.key.code == sfKeyUp || core.game.event.key.code ==
    sfKeyZ)
        core.character = move_up(core);
    if (core.game.event.key.code == sfKeyDown || core.game.event.key.code ==
    sfKeyS)
        core.character = move_down(core);
    return (core.character);
}

core_t enemie_found(core_t core)
{
    sfSound_pause(core.music.game_sound);
    sfSound_play(core.music.fight_sound);
    core.game.status = 42;
    return (core);
}