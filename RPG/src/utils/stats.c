/*
** EPITECH PROJECT, 2021
** stats
** File description:
** stats
*/

#include "../../include/rpg.h"

void draw_stats(core_t core)
{
    sfText_setString(core.character.stats.tpv, rvatoi(core.character.stats.pv));
    sfRenderWindow_drawText(core.game.window, core.character.stats.tpv, NULL);
    sfText_setString(core.character.stats.tpvmax,
    rvatoi(core.character.stats.pvmax));
    sfRenderWindow_drawText(core.game.window, core.character.stats.tpvmax,
    NULL);
    sfText_setString(core.character.stats.tlvl,
    rvatoi(core.character.stats.lvl));
    sfRenderWindow_drawText(core.game.window, core.character.stats.tlvl,
    NULL);
    sfText_setString(core.character.stats.tstr, rvatoi(core.character.stats.str
    + core.character.stats.weapon_str));
    sfRenderWindow_drawText(core.game.window, core.character.stats.tstr, NULL);
    sfText_setString(core.character.stats.txp,
    rvatoi(core.character.stats.xp));
    sfRenderWindow_drawText(core.game.window, core.character.stats.txp, NULL);
    sfText_setString(core.character.stats.txp_up,
    rvatoi(core.character.stats.xp_up));
    sfRenderWindow_drawText(core.game.window, core.character.stats.txp_up,
    NULL);
}