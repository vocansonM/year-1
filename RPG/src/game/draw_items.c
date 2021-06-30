/*
** EPITECH PROJECT, 2021
** draw_inventory_items
** File description:
** draw_items.c
*/

#include "../../include/rpg.h"

void draw_items(struct core_s core)
{
    if (core.market.axe == 1)
        sfRenderWindow_drawSprite(core.game.window, core.inventory.axe_inv_s,
        sfFalse);
    if (core.market.sword == 1)
        sfRenderWindow_drawSprite(core.game.window, core.inventory.sword_inv_s,
        sfFalse);
    if (core.market.boots == 1)
        sfRenderWindow_drawSprite(core.game.window, core.inventory.boots_inv_s,
        sfFalse);
}

void draw_potions(struct core_s core)
{
    if (core.market.fivehp == 1) {
        sfText_setString(core.text_potion.fivehp,
        rvatoi(core.text_potion.fivehp_nb));
        sfRenderWindow_drawSprite(core.game.window,
        core.inventory.fivehp_inv_s, sfFalse);
        sfRenderWindow_drawText(core.game.window, core.text_potion.fivehp,
        NULL);
    } if (core.market.tenhp == 1) {
        sfText_setString(core.text_potion.tenhp,
        rvatoi(core.text_potion.tenhp_nb));
        sfRenderWindow_drawSprite(core.game.window, core.inventory.tenhp_inv_s,
        sfFalse);
        sfRenderWindow_drawText(core.game.window, core.text_potion.tenhp,
        NULL);
    }
    draw_potions2(core);
}

void draw_potions2(struct core_s core)
{
    if (core.market.fifthhp == 1) {
        sfText_setString(core.text_potion.fifthhp,
        rvatoi(core.text_potion.fifthhp_nb));
        sfRenderWindow_drawSprite(core.game.window,
        core.inventory.fifthhp_inv_s, sfFalse);
        sfRenderWindow_drawText(core.game.window, core.text_potion.fifthhp,
        NULL);
    }
}
