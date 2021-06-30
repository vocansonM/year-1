/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

quest_t init_quest(struct quest_s quest)
{
    quest.font = sfFont_createFromFile("assets/font.ttf");

    quest.text = sfText_create();
    sfText_setPosition(quest.text, get_pos(1150, 540));
    sfText_setString(quest.text, " ");
    sfText_setFont(quest.text, quest.font);
    sfText_setColor(quest.text, sfWhite);
    sfText_setCharacterSize(quest.text, 20);
    return (quest);
}

background_t init_background(struct background_s background)
{
    background.x = 0;
    background.y = 0;
    background.x0y0 = sfTexture_createFromFile("assets/x0y0.png", NULL);
    background.x1y0 = sfTexture_createFromFile("assets/x1y0.png", NULL);
    background.x0y1 = sfTexture_createFromFile("assets/x0y1.png", NULL);
    background.x1y1 = sfTexture_createFromFile("assets/x1y1.png", NULL);
    background.sprite = sfSprite_create();
    sfSprite_setTexture(background.sprite, background.x0y0, sfFalse);
    return (background);
}

fight_text_t init_fight_text_ennemy(struct fight_text_s fight_text)
{
    fight_text.font = sfFont_createFromFile("assets/font.ttf");
    fight_text.ennemie = sfText_create();
    sfText_setPosition(fight_text.ennemie, get_pos(25, 115));
    sfText_setString(fight_text.ennemie, "NAME_ENNEMY");
    sfText_setFont(fight_text.ennemie, fight_text.font);
    sfText_setColor(fight_text.ennemie, sfBlack);
    sfText_setCharacterSize(fight_text.ennemie, 50);
    fight_text.pv_ennemie = sfText_create();
    sfText_setPosition(fight_text.pv_ennemie, get_pos(220, 190));
    sfText_setFont(fight_text.pv_ennemie, fight_text.font);
    sfText_setColor(fight_text.pv_ennemie, sfBlack);
    sfText_setCharacterSize(fight_text.pv_ennemie, 50);
    fight_text.pv_boss = sfText_create();
    sfText_setPosition(fight_text.pv_boss, get_pos(220, 190));
    sfText_setFont(fight_text.pv_boss, fight_text.font);
    sfText_setColor(fight_text.pv_boss, sfBlack);
    sfText_setCharacterSize(fight_text.pv_boss, 50);
    return (fight_text);
}

market_t init_market(struct market_s market)
{
    market.market_t = sfTexture_createFromFile("assets/market.png", NULL);
    market.market_s = sfSprite_create();
    sfSprite_setTexture(market.market_s, market.market_t, sfFalse);
    market.po = 50;
    market.potxt = sfText_create();
    market.font = sfFont_createFromFile("assets/font.ttf");
    sfText_setPosition(market.potxt, get_pos(360, 220));
    sfText_setString(market.potxt, rvatoi(market.po));
    sfText_setFont(market.potxt, market.font);
    sfText_setColor(market.potxt, sfYellow);
    sfText_setCharacterSize(market.potxt, 75);
    market.error_t = sfTexture_createFromFile("assets/balance.png", NULL);
    market.error_s = sfSprite_create();
    sfSprite_setTexture(market.error_s, market.error_t, sfFalse);
    market = init_market2(market);
    return (market);
}

market_t init_market2(struct market_s market)
{
    market.axe = 0;
    market.sword = 0;
    market.boots = 0;
    market.fivehp = 0;
    market.tenhp = 0;
    market.fifthhp = 0;
    return (market);
}