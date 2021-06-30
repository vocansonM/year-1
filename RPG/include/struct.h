/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

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

typedef struct game_s {
    sfRenderWindow *window;
    sfClock *clock;
    sfTime time;
    sfEvent event;
    sfFloatRect view_rect;
    sfVector2f mousesprite;
    int status;
    int part;
    sfVector2i pos;
} game_t;

typedef struct button_s {
    sfTexture *start_t;
    sfSprite *start_s;
    sfTexture *quit_t;
    sfSprite *quit_s;
    sfTexture *key_t;
    sfSprite *key_s;
    sfTexture *joelle_t;
    sfSprite *joelle_s;
    sfTexture *sasha_t;
    sfSprite *sasha_s;
    sfTexture *arrow_t;
    sfSprite *arrow_s;
}button_t;

typedef struct stats_s {
    sfText *tpv;
    sfText *tpvmax;
    sfText *tstr;
    sfText *txp;
    sfText *txp_up;
    sfText *tlvl;
    sfFont *font;
    int pv;
    int weapon_str;
    int pvmax;
    int speed;
    int str;
    int xp;
    int xp_up;
    int lvl;
}stats_t;

typedef struct boss_s {
    stats_t stats;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vect;
    sfTexture *room_t;
    sfSprite *room_s;
}boss_t;

typedef struct enemies_s {
    stats_t stats;
    sfClock *clock;
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *sword_t;
    sfSprite *sword_s;
    sfVector2f vect;
    sfVector2f vect_e;
} enemies_t;

typedef struct character_s {
    stats_t stats;
    sfClock *clock;
    sfIntRect rect;
    sfTexture *sacha;
    sfTexture *joelle;
    sfSprite *sprite;
    sfVector2f vect;
    int fight_status;
} character_t;

typedef struct menu_s {
    sfTexture *menu_t;
    sfSprite *menu_s;
    sfTexture *win_t;
    sfSprite *win_s;
} menu_t;

typedef struct fight_s {
    sfVector2f char_vect;
    sfTexture *ash_s;
    sfTexture *ash_b;
    sfTexture *joy_s;
    sfTexture *joy_b;
    sfSprite *sprite;
}fight_t;

typedef struct settings_s {
    sfTexture *settings_t;
    sfSprite *settings_s;
    sfTexture *lose_t;
    sfSprite *lose_s;
    sfTexture *pause_t;
    sfSprite *pause_s;
    sfTexture *selec_t;
    sfSprite *selec_s;
    sfTexture *inv_t;
    sfSprite *inv_s;
    sfTexture *vlm_t;
    sfSprite *vlm_s;
} settings_t;

typedef struct clic_s {
    sfTexture *clic_t;
    sfSprite *clic_s;
} clic_t;

typedef struct mouse_s {
    sfTexture *hand;
    sfVector2f mousesprite;
    sfSprite *handsprite;
} mouse_t;

typedef struct background_s {
    sfTexture *x0y0;
    sfTexture *x1y0;
    sfTexture *x0y1;
    sfTexture *x1y1;
    sfTexture *background;
    sfSprite *sprite;
    int x;
    int y;
} background_t;

typedef struct music_s {
    sfSoundBuffer *menu_buffer;
    sfSound *menu_sound;
    sfSoundBuffer *game_buffer;
    sfSound *game_sound;
    sfSoundBuffer *fight_buffer;
    sfSound *fight_sound;
    sfSoundBuffer *click_buffer;
    sfSound *click_sound;
    sfSoundBuffer *damage_buffer;
    sfSound *damage_sound;
    sfSoundBuffer *sword_buffer;
    sfSound *sword_sound;
} music_t;

typedef struct market_s {
    sfTexture *market_t;
    sfSprite *market_s;
    sfTexture *error_t;
    sfSprite *error_s;
    int po;
    sfText *potxt;
    sfFont *font;
    int sword;
    int axe;
    int boots;
    int fivehp;
    int tenhp;
    int fifthhp;
} market_t;

typedef struct inventory_s {
    sfTexture *axe_inv_t;
    sfSprite *axe_inv_s;
    sfTexture *sword_inv_t;
    sfSprite *sword_inv_s;
    sfTexture *boots_inv_t;
    sfSprite *boots_inv_s;
    sfTexture *fivehp_inv_t;
    sfSprite *fivehp_inv_s;
    sfTexture *tenhp_inv_t;
    sfSprite *tenhp_inv_s;
    sfTexture *fifthhp_inv_t;
    sfSprite *fifthhp_inv_s;
} inventory_t;

typedef struct text_potion_s {
    sfText *fivehp;
    sfText *tenhp;
    sfText *fifthhp;
    sfFont *font;
    int fivehp_nb;
    int tenhp_nb;
    int fifthhp_nb;
} text_potion_t;

typedef struct fight_text_s {
    sfText *character;
    sfText *ennemie;
    sfText *pv_character;
    sfText *pv_ennemie;
    sfText *pv_boss;
    sfFont *font;
} fight_text_t;

typedef struct volume_s {
    float fight;
    float damage;
    float sword;
    float click;
    float game;
    float menu;
} volume_t;

typedef struct quest_s {
    sfFont *font;
    sfText *text;
} quest_t;

typedef struct core_s{
    game_t game;
    enemies_t enemies;
    menu_t menu;
    boss_t boss;
    button_t button;
    fight_t fight;
    background_t background;
    character_t character;
    settings_t settings;
    mouse_t mouse;
    clic_t clic;
    music_t music;
    market_t market;
    inventory_t inventory;
    text_potion_t text_potion;
    fight_text_t fight_text;
    volume_t volume;
    quest_t quest;
} core_t;

#endif