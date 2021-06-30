/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

game_t init_game(struct game_s game)
{
    sfVideoMode mode = {1920, 1080, 32};
    game.window = sfRenderWindow_create(mode, "MyRPG",
    sfClose | sfResize, NULL);
    sfRenderWindow_setMouseCursorVisible(game.window, false);
    sfRenderWindow_setFramerateLimit(game.window, 60);
    game.part = 1;
    game.status = 0;
    return (game);
}

character_t init_character(struct character_s character)
{
    character.stats = init_stats(character.stats);
    character.clock = sfClock_create();
    character.rect.top = 1;
    character.rect.left = 88;
    character.rect.width = 49;
    character.rect.height = 60;
    character.sprite = sfSprite_create();
    character.sacha = sfTexture_createFromFile("assets/sasha.png",
    NULL);
    character.joelle = sfTexture_createFromFile("assets/joelle.png",
    NULL);
    character.vect.x = 1180;
    character.vect.y = 680;
    sfSprite_setTexture(character.sprite, character.sacha, sfTrue);
    character.fight_status = 0;
    return (character);
}

settings_t init_settings(settings_t settings)
{
    settings.settings_t = sfTexture_createFromFile("assets/keys.png", NULL);
    settings.settings_s = sfSprite_create();
    sfSprite_setTexture(settings.settings_s, settings.settings_t, sfFalse);
    settings.pause_t = sfTexture_createFromFile("assets/pause.png", NULL);
    settings.pause_s = sfSprite_create();
    sfSprite_setTexture(settings.pause_s, settings.pause_t, sfFalse);
    settings.selec_t = sfTexture_createFromFile("assets/characters.png", NULL);
    settings.selec_s = sfSprite_create();
    sfSprite_setTexture(settings.selec_s, settings.selec_t, sfFalse);
    settings.inv_t = sfTexture_createFromFile("assets/inventory.png", NULL);
    settings.inv_s = sfSprite_create();
    sfSprite_setTexture(settings.inv_s, settings.inv_t, sfFalse);
    settings.lose_t = sfTexture_createFromFile("assets/game_over.png", NULL);
    settings.lose_s = sfSprite_create();
    sfSprite_setTexture(settings.lose_s, settings.lose_t, sfFalse);
    settings.vlm_t = sfTexture_createFromFile("assets/settings.png", NULL);
    settings.vlm_s = sfSprite_create();
    sfSprite_setTexture(settings.vlm_s, settings.vlm_t, sfFalse);
    return (settings);
}

menu_t init_menu(struct menu_s menu)
{
    menu.menu_t = sfTexture_createFromFile("assets/menu.png",
    NULL);
    menu.menu_s = sfSprite_create();
    sfSprite_setTexture(menu.menu_s, menu.menu_t, sfFalse);
    menu.win_t = sfTexture_createFromFile("assets/gamewin.png",
    NULL);
    menu.win_s = sfSprite_create();
    sfSprite_setTexture(menu.win_s, menu.win_t, sfFalse);
    return (menu);
}

clic_t init_clic(struct clic_s clic)
{
    clic.clic_t = sfTexture_createFromFile("assets/menu.png",
    NULL);
    clic.clic_s = sfSprite_create();
    sfSprite_setTexture(clic.clic_s, clic.clic_t, sfFalse);
    return (clic);
}