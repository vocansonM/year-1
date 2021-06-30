/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

inventory_t init_inventory(struct inventory_s inventory)
{
    inventory.axe_inv_s = sfSprite_create();
    inventory.axe_inv_t = sfTexture_createFromFile("assets/axe_inv.png",
    NULL);
    sfSprite_setTexture(inventory.axe_inv_s, inventory.axe_inv_t, sfTrue);
    inventory.sword_inv_s = sfSprite_create();
    inventory.sword_inv_t = sfTexture_createFromFile("assets/sword_inv.png",
    NULL);
    sfSprite_setTexture(inventory.sword_inv_s, inventory.sword_inv_t, sfTrue);
    inventory.boots_inv_s = sfSprite_create();
    inventory.boots_inv_t = sfTexture_createFromFile("assets/boots_inv.png",
    NULL);
    sfSprite_setTexture(inventory.boots_inv_s, inventory.boots_inv_t, sfTrue);
    inventory.fivehp_inv_s = sfSprite_create();
    inventory.fivehp_inv_t = sfTexture_createFromFile("assets/fivehp_inv.png",
    NULL);
    inventory = init_inventory2(inventory);
    return (inventory);
}

inventory_t init_inventory2(struct inventory_s inventory)
{
    sfSprite_setTexture(inventory.fivehp_inv_s, inventory.fivehp_inv_t, sfTrue);
    inventory.tenhp_inv_s = sfSprite_create();
    inventory.tenhp_inv_t = sfTexture_createFromFile("assets/tenhp_inv.png",
    NULL);
    sfSprite_setTexture(inventory.tenhp_inv_s, inventory.tenhp_inv_t, sfTrue);
    inventory.fifthhp_inv_s = sfSprite_create();
    inventory.fifthhp_inv_t = sfTexture_createFromFile("assets/fifthhp_inv.png",
    NULL);
    sfSprite_setTexture(inventory.fifthhp_inv_s, inventory.fifthhp_inv_t,
    sfTrue);
    return (inventory);
}

text_potion_t init_text_potion(struct text_potion_s text_potion)
{
    text_potion.fivehp_nb = 0;
    text_potion.tenhp_nb = 0;
    text_potion.fifthhp_nb = 0;
    text_potion.font = sfFont_createFromFile("assets/font.ttf");
    text_potion.fivehp = sfText_create();
    sfText_setPosition(text_potion.fivehp, get_pos(165, 596));
    sfText_setString(text_potion.fivehp, rvatoi(text_potion.fivehp_nb));
    sfText_setFont(text_potion.fivehp, text_potion.font);
    sfText_setColor(text_potion.fivehp, sfWhite);
    sfText_setCharacterSize(text_potion.fivehp, 20);
    text_potion.tenhp = sfText_create();
    sfText_setPosition(text_potion.tenhp, get_pos(235, 596));
    sfText_setString(text_potion.tenhp, rvatoi(text_potion.tenhp_nb));
    sfText_setFont(text_potion.tenhp, text_potion.font);
    sfText_setColor(text_potion.tenhp, sfWhite);
    sfText_setCharacterSize(text_potion.tenhp, 20);
    text_potion = init_text_potion2(text_potion);
    return (text_potion);
}

text_potion_t init_text_potion2(struct text_potion_s text_potion)
{
    text_potion.fifthhp = sfText_create();
    sfText_setPosition(text_potion.fifthhp, get_pos(305, 596));
    sfText_setString(text_potion.fifthhp, rvatoi(text_potion.fifthhp_nb));
    sfText_setFont(text_potion.fifthhp, text_potion.font);
    sfText_setColor(text_potion.fifthhp, sfWhite);
    sfText_setCharacterSize(text_potion.fifthhp, 20);
    return (text_potion);
}

fight_text_t init_fight_text_character(struct fight_text_s fight_text)
{
    fight_text.font = sfFont_createFromFile("assets/font.ttf");

    fight_text.character = sfText_create();
    sfText_setPosition(fight_text.character, get_pos(1410, 560));
    sfText_setString(fight_text.character, "NAME_CHARACTER");
    sfText_setFont(fight_text.character, fight_text.font);
    sfText_setColor(fight_text.character, sfBlack);
    sfText_setCharacterSize(fight_text.character, 50);

    fight_text.pv_character = sfText_create();
    sfText_setPosition(fight_text.pv_character, get_pos(1590, 640));
    sfText_setFont(fight_text.pv_character, fight_text.font);
    sfText_setColor(fight_text.pv_character, sfBlack);
    sfText_setCharacterSize(fight_text.pv_character, 50);
    return (fight_text);
}