/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

enemies_t init_enemies(struct enemies_s enemies)
{
    enemies.stats = init_enemies_stats(enemies.stats);
    enemies.clock = sfClock_create();
    enemies.sword_s = sfSprite_create();
    enemies.sword_t = sfTexture_createFromFile("assets/sword.png", NULL);
    enemies.vect.x = 540;
    enemies.vect.y = 852;
    sfSprite_setTexture(enemies.sword_s, enemies.sword_t, sfFalse);
    sfSprite_setPosition(enemies.sword_s, enemies.vect);
    enemies.texture = sfTexture_createFromFile("assets/enemie.png", NULL);
    enemies.sprite = sfSprite_create();
    enemies.vect_e.x = 1500;
    enemies.vect_e.y = 852;
    sfSprite_setPosition(enemies.sprite, enemies.vect_e);
    sfSprite_setTexture(enemies.sprite, enemies.texture, sfFalse);
    return (enemies);
}

stats_t init_enemies_stats(struct stats_s stats)
{
    stats.pv = 10;
    stats.speed = 5;
    stats.str = 6;
    return (stats);
}

fight_t init_fight(struct fight_s fight)
{
    fight.char_vect.x = 2000;
    fight.char_vect.y = 506;
    fight.ash_s = sfTexture_createFromFile("assets/ash_s.png", NULL);
    fight.ash_b = sfTexture_createFromFile("assets/ash_b.png", NULL);
    fight.joy_s = sfTexture_createFromFile("assets/joy_s.png", NULL);
    fight.joy_b = sfTexture_createFromFile("assets/joy_b.png", NULL);
    fight.sprite = sfSprite_create();
    return (fight);
}

button_t init_button(button_t button)
{
    button.start_t = sfTexture_createFromFile("assets/play.png", NULL);
    button.start_s = sfSprite_create();
    sfSprite_setTexture(button.start_s, button.start_t, sfFalse);
    button.quit_t = sfTexture_createFromFile("assets/quit.png", NULL);
    button.quit_s = sfSprite_create();
    sfSprite_setTexture(button.quit_s, button.quit_t, sfFalse);
    button.key_t = sfTexture_createFromFile("assets/key.png", NULL);
    button.key_s = sfSprite_create();
    sfSprite_setTexture(button.key_s, button.key_t, sfFalse);
    button.joelle_t = sfTexture_createFromFile("assets/joelle_b.png", NULL);
    button.joelle_s = sfSprite_create();
    sfSprite_setTexture(button.joelle_s, button.joelle_t, sfFalse);
    button.sasha_t = sfTexture_createFromFile("assets/sasha_b.png", NULL);
    button.sasha_s = sfSprite_create();
    sfSprite_setTexture(button.sasha_s, button.sasha_t, sfFalse);
    button.arrow_t = sfTexture_createFromFile("assets/arrow.png", NULL);
    button.arrow_s = sfSprite_create();
    sfSprite_setTexture(button.arrow_s, button.arrow_t, sfFalse);
    return (button);
}

boss_t init_boss(struct boss_s boss)
{
    boss.vect.x = 930;
    boss.vect.y = 300;
    boss.sprite = sfSprite_create();
    boss.texture = sfTexture_createFromFile("assets/boss.png", NULL);
    sfSprite_setPosition(boss.sprite, boss.vect);
    sfSprite_setTexture(boss.sprite, boss.texture, sfTrue);
    boss.room_s = sfSprite_create();
    boss.room_t = sfTexture_createFromFile("assets/ground.png", NULL);
    sfSprite_setTexture(boss.room_s, boss.room_t, sfTrue);
    boss.stats.pv = 50;
    boss.stats.str = 8;
    return (boss);
}