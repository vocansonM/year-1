/*
** EPITECH PROJECT, 2021
** free
** File description:
** destroy
*/

#include "../../include/rpg.h"

void sound_destroy(music_t music)
{
    sfSoundBuffer_destroy(music.damage_buffer);
    sfSoundBuffer_destroy(music.sword_buffer);
    sfSoundBuffer_destroy(music.menu_buffer);
    sfSoundBuffer_destroy(music.fight_buffer);
    sfSoundBuffer_destroy(music.game_buffer);
    sfSoundBuffer_destroy(music.click_buffer);
    sfSound_destroy(music.menu_sound);
    sfSound_destroy(music.fight_sound);
    sfSound_destroy(music.game_sound);
    sfSound_destroy(music.click_sound);
    sfSound_destroy(music.damage_sound);
    sfSound_destroy(music.sword_sound);
}

void text_destroy(core_t core)
{
    sfText_destroy(core.character.stats.tpv);
    sfText_destroy(core.character.stats.tpvmax);
    sfText_destroy(core.character.stats.tstr);
    sfText_destroy(core.character.stats.txp);
    sfText_destroy(core.character.stats.txp_up);
    sfText_destroy(core.character.stats.tlvl);
    sfText_destroy(core.quest.text);
    sfFont_destroy(core.quest.font);
}

void text_destroy2(core_t core)
{
    sfText_destroy(core.market.potxt);
    sfText_destroy(core.text_potion.fivehp);
    sfText_destroy(core.text_potion.tenhp);
    sfText_destroy(core.text_potion.fifthhp);
    sfText_destroy(core.fight_text.character);
    sfText_destroy(core.fight_text.ennemie);
    sfText_destroy(core.fight_text.pv_character);
    sfText_destroy(core.fight_text.pv_ennemie);
    sfText_destroy(core.fight_text.pv_boss);
    sfFont_destroy(core.character.stats.font);
    sfFont_destroy(core.market.font);
    sfFont_destroy(core.text_potion.font);
    sfFont_destroy(core.fight_text.font);
}

void sprite_destroy(core_t core)
{
    sfSprite_destroy(core.button.start_s);
    sfSprite_destroy(core.button.quit_s);
    sfSprite_destroy(core.button.key_s);
    sfSprite_destroy(core.button.joelle_s);
    sfSprite_destroy(core.button.sasha_s);
    sfSprite_destroy(core.button.arrow_s);
    sfSprite_destroy(core.boss.sprite);
    sfSprite_destroy(core.boss.room_s);
    sfSprite_destroy(core.enemies.sprite);
    sfSprite_destroy(core.enemies.sword_s);
    sfSprite_destroy(core.character.sprite);
    sfSprite_destroy(core.menu.menu_s);
    sfSprite_destroy(core.fight.sprite);
    sfSprite_destroy(core.settings.settings_s);
    sfSprite_destroy(core.settings.lose_s);
    sfSprite_destroy(core.settings.pause_s);
    sfSprite_destroy(core.settings.selec_s);
}

void sprite_destroy2(core_t core)
{
    sfSprite_destroy(core.settings.inv_s);
    sfSprite_destroy(core.settings.vlm_s);
    sfSprite_destroy(core.clic.clic_s);
    sfSprite_destroy(core.mouse.handsprite);
    sfSprite_destroy(core.background.sprite);
    sfSprite_destroy(core.market.market_s);
    sfSprite_destroy(core.market.error_s);
    sfSprite_destroy(core.inventory.axe_inv_s);
    sfSprite_destroy(core.inventory.sword_inv_s);
    sfSprite_destroy(core.inventory.boots_inv_s);
    sfSprite_destroy(core.inventory.fivehp_inv_s);
    sfSprite_destroy(core.inventory.tenhp_inv_s);
    sfSprite_destroy(core.inventory.fifthhp_inv_s);
    sfSprite_destroy(core.menu.win_s);
}