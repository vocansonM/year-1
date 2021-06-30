/*
** EPITECH PROJECT, 2021
** free
** File description:
** destroy
*/

#include "../../include/rpg.h"

void texture_destroy(core_t core)
{
    sfTexture_destroy(core.button.start_t);
    sfTexture_destroy(core.button.quit_t);
    sfTexture_destroy(core.button.key_t);
    sfTexture_destroy(core.button.joelle_t);
    sfTexture_destroy(core.button.sasha_t);
    sfTexture_destroy(core.button.arrow_t);
    sfTexture_destroy(core.boss.texture);
    sfTexture_destroy(core.boss.room_t);
    sfTexture_destroy(core.enemies.texture);
    sfTexture_destroy(core.enemies.sword_t);
    sfTexture_destroy(core.character.sacha);
    sfTexture_destroy(core.character.joelle);
    sfTexture_destroy(core.menu.menu_t);
    sfTexture_destroy(core.fight.ash_s);
    sfTexture_destroy(core.fight.ash_b);
    sfTexture_destroy(core.fight.joy_s);
    sfTexture_destroy(core.fight.joy_b);
    sfTexture_destroy(core.settings.settings_t);
    sfTexture_destroy(core.settings.lose_t);
}

void texture_destroy2(core_t core)
{
    sfTexture_destroy(core.settings.pause_t);
    sfTexture_destroy(core.settings.selec_t);
    sfTexture_destroy(core.settings.inv_t);
    sfTexture_destroy(core.settings.vlm_t);
    sfTexture_destroy(core.clic.clic_t);
    sfTexture_destroy(core.mouse.hand);
    sfTexture_destroy(core.background.x0y0);
    sfTexture_destroy(core.background.x1y0);
    sfTexture_destroy(core.background.x0y1);
    sfTexture_destroy(core.background.x1y1);
    sfTexture_destroy(core.background.background);
    sfTexture_destroy(core.market.market_t);
    sfTexture_destroy(core.market.error_t);
    sfTexture_destroy(core.inventory.axe_inv_t);
    sfTexture_destroy(core.inventory.sword_inv_t);
    sfTexture_destroy(core.inventory.boots_inv_t);
    sfTexture_destroy(core.inventory.fivehp_inv_t);
    sfTexture_destroy(core.inventory.tenhp_inv_t);
    sfTexture_destroy(core.inventory.fifthhp_inv_t);
    sfTexture_destroy(core.menu.win_t);
}