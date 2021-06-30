/*
** EPITECH PROJECT, 2021
** set_init_to_struct
** File description:
** set_init_to_struct
*/

#include "../../include/rpg.h"

core_t init_all(struct core_s core)
{
    core.settings = init_settings(core.settings);
    core.character = init_character(core.character);
    core.game = init_game(core.game);
    core.button = init_button(core.button);
    core.menu = init_menu(core.menu);
    core.mouse = init_mouse(core.mouse);
    core.clic = init_clic(core.clic);
    core.boss = init_boss(core.boss);
    core.background = init_background(core.background);
    core.music = init_music(core.music);
    core.market = init_market(core.market);
    core.enemies = init_enemies(core.enemies);
    core.fight = init_fight(core.fight);
    core.inventory = init_inventory(core.inventory);
    core.text_potion = init_text_potion(core.text_potion);
    core.fight_text = init_fight_text_character(core.fight_text);
    core.fight_text = init_fight_text_ennemy(core.fight_text);
    core.quest = init_quest(core.quest);
    return (core);
}