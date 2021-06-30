/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef RPG_H_
#define RPG_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <time.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "struct.h"

// lib.c
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
sfVector2f get_pos(int x, int y);
char *rvatoi(int nb);
int my_nbr(int nb);

// stats.c
void draw_stats(core_t core);

// instruction.c
void helpfunc(void);

// init_struct.c
game_t init_game(struct game_s game);
character_t init_character(struct character_s character);
settings_t init_settings(settings_t settings);
menu_t init_menu(struct menu_s menu);
clic_t init_clic(struct clic_s clic);

// init_struct2.c
music_t init_music(struct music_s music);
music_t init_music2(struct music_s music);
stats_t init_stats(struct stats_s stats);
stats_t init_stats2(struct stats_s stats);
stats_t init_stats3(struct stats_s stats);

// init_struct3.c
enemies_t init_enemies(struct enemies_s enemies);
stats_t init_enemies_stats(struct stats_s stats);
fight_t init_fight(struct fight_s fight);
button_t init_button(button_t button);
boss_t init_boss(struct boss_s boss);

// init_struct4.c
inventory_t init_inventory(struct inventory_s inventory);
inventory_t init_inventory2(struct inventory_s inventory);
text_potion_t init_text_potion(struct text_potion_s text_potion);
text_potion_t init_text_potion2(struct text_potion_s text_potion);
fight_text_t init_fight_text_character(struct fight_text_s fight_text);

// init_struct5.c
quest_t init_quest(struct quest_s quest);
background_t init_background(struct background_s background);
fight_text_t init_fight_text_ennemy(struct fight_text_s fight_text);
market_t init_market(struct market_s market);
market_t init_market2(struct market_s market);

// boss.c
core_t boss_room(core_t core);

// background.c
core_t load_background(core_t core);
background_t switch_background(core_t core);

// destroy.c
void sound_destroy(music_t music);
void text_destroy(core_t core);
void text_destroy2(core_t core);
void sprite_destroy(core_t core);
void sprite_destroy2(core_t core);

// destroy2.c
void texture_destroy(core_t core);
void texture_destroy2(core_t core);

// my_rpg.c
void show_window(struct core_s core);
void free_all(struct core_s core);

// instruction.c
void helpfunc(void);

// set_init_to_struct.c
core_t init_all(struct core_s core);

// window_event.c
core_t event_check(struct core_s core);

// player_move.c
character_t move_right(core_t core);
character_t move_left(core_t core);
character_t move_up(core_t core);
character_t move_down(core_t core);

// play.c
core_t enemie_found(core_t core);
character_t player_move(core_t core);
void character_move(core_t core);
core_t start_game(core_t core);

// check_status.c
core_t check_status(struct core_s core);
core_t check_status2(struct core_s core);
core_t check_status3(struct core_s core);
core_t check_status4(struct core_s core);
core_t check_status5(struct core_s core);

// check_status2.c
core_t check_status6(struct core_s core);
core_t check_status7(struct core_s core);

// open_menus.c
core_t draw_menus(struct core_s core);
core_t draw_menus2(struct core_s core);
core_t draw_menus3(struct core_s core);
core_t draw_menus4(struct core_s core);
core_t draw_menus5(struct core_s core);
core_t draw_menus6(struct core_s core);
core_t draw_menus7(struct core_s core);
core_t draw_menus8(struct core_s core);
core_t draw_menus9(struct core_s core);
core_t draw_menus10(struct core_s core);
core_t draw_menus11(struct core_s core);
core_t draw_menus12(struct core_s core);
core_t draw_menus13(struct core_s core);
core_t draw_menus14(struct core_s core);
core_t draw_menus15(struct core_s core);

// mouse.c
mouse_t init_mouse(struct mouse_s mouse);
//settings_t settings_struct(settings_t settings);

// collison.c
int collision_right(core_t core);
int collision_left(core_t core);
int collision_up(core_t core);
int collision_down(core_t core);

// collision_right.c
int xoyor(core_t core);
int xoyixiyor(core_t core);
int xiyir(core_t core);
int xoyor2xoyir(core_t core);
int boss_right(core_t core);

// collision_left.c
int xoyol(core_t core);
int xoyixiyol(core_t core);
int xiyol(core_t core);
int boss_left(core_t core);

// collision_up
int xoyou(core_t core);
int xoyou_bis(core_t core);
int xiyoxiyiu(core_t core);
int xoyiu(core_t core);
int boss_up(core_t core);

// collision_down
int xoyod(core_t core);
int xoyod_bis(core_t core);
int xoyixiyod(core_t core);
int xiyid(core_t core);
int boss_down(core_t core);

// market.c
core_t open_market(core_t core);
void market_evt(core_t core);
core_t not_enough_gold(struct core_s core);

// fight.c
core_t fight_start(core_t core);
core_t fight_start2(core_t core);
core_t fight_start3(core_t core);
character_t win(character_t character);

// fight2.c
core_t draw_fight(core_t core);
core_t draw_fight2(core_t core);

// draw_items.c
void draw_items(struct core_s core);
void draw_potions(struct core_s core);
void draw_potions2(struct core_s core);

// check_status_settings.c
core_t check_status_vlm(struct core_s core);
core_t check_status_vlm2(struct core_s core);
core_t check_status_vlm3(struct core_s core);
core_t check_status_ips(struct core_s core);
void setvolume(core_t core, int i);

// quest.c
core_t first_quest(core_t core);
core_t scnd_quest(core_t core);
core_t third_quest(core_t core);
core_t fourth_quest(core_t core);

#endif