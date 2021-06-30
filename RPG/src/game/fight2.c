/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

core_t draw_fight(core_t core)
{
    core.character.rect.top = 61;
    core.character.rect.left = 88;
    sfSprite_setTextureRect(core.character.sprite, core.character.rect);
    sfRenderWindow_drawSprite(core.game.window, core.fight.sprite, sfFalse);
    if (core.character.fight_status == 1) {
        if (core.game.part != 4)
            sfSprite_setTexture(core.fight.sprite, core.fight.ash_s, sfFalse);
        else sfSprite_setTexture(core.fight.sprite, core.fight.ash_b, sfFalse);
        sfText_setString(core.fight_text.character, "Sasha");
        sfRenderWindow_drawText(core.game.window, core.fight_text.character,
        NULL);
    } else if (core.character.fight_status == 2) {
        if (core.game.part != 4)
            sfSprite_setTexture(core.fight.sprite, core.fight.joy_s, sfFalse);
        else sfSprite_setTexture(core.fight.sprite, core.fight.joy_b, sfFalse);
        sfText_setString(core.fight_text.character, "Joelle");
        sfRenderWindow_drawText(core.game.window, core.fight_text.character,
        NULL);
    } core = draw_fight2(core);
    return (core);
}

core_t draw_fight2(core_t core)
{
    sfText_setString(core.fight_text.ennemie, "Ennemy");
    sfText_setString(core.fight_text.pv_character,
    rvatoi(core.character.stats.pv));
    sfText_setString(core.fight_text.pv_ennemie,
    rvatoi(core.enemies.stats.pv));
    sfText_setString(core.fight_text.pv_boss, rvatoi(core.boss.stats.pv));
        sfRenderWindow_drawText(core.game.window, core.fight_text.ennemie,
        NULL);
        sfRenderWindow_drawText(core.game.window, core.fight_text.pv_character,
        NULL);
    if (core.game.part != 4) {
        sfRenderWindow_drawText(core.game.window, core.fight_text.pv_ennemie,
        NULL);
    } else {
        sfRenderWindow_drawText(core.game.window, core.fight_text.pv_boss,
        NULL);
    }
    sfSprite_setPosition(core.character.sprite, core.fight.char_vect);
    sfRenderWindow_drawSprite(core.game.window, core.character.sprite,
    sfFalse);
    return (core);
}