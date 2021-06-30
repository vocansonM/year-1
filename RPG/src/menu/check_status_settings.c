/*
** EPITECH PROJECT, 2021
** check_settings
** File description:
** check_settings
*/

#include "../../include/rpg.h"

core_t check_status_vlm3(struct core_s core)
{
    core.volume.fight = sfSound_getVolume(core.music.fight_sound);
    core.volume.damage = sfSound_getVolume(core.music.damage_sound);
    core.volume.sword = sfSound_getVolume(core.music.sword_sound);

    if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 166 && core.game.pos.x < 345 &&
    core.game.pos.y > 665 && core.game.pos.y < 845) {
        core.volume.fight -= 5;
        core.volume.damage -= 5;
        core.volume.sword -= 5;
        setvolume(core, 1);
    } else if (core.game.event.type == sfEvtMouseButtonPressed
    && core.game.pos.x > 370 && core.game.pos.x < 550 &&
    core.game.pos.y > 665 && core.game.pos.y < 845) {
        core.volume.fight += 5;
        core.volume.damage += 5;
        core.volume.sword += 5;
        setvolume(core, 1);
    }
    return (core);
}

core_t check_status_vlm2(struct core_s core)
{
    core.volume.click = sfSound_getVolume(core.music.click_sound);
    core.volume.game = sfSound_getVolume(core.music.game_sound);
    core.volume.menu = sfSound_getVolume(core.music.menu_sound);

    if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 166 && core.game.pos.x < 345 &&
    core.game.pos.y > 665 && core.game.pos.y < 845) {
        core.volume.click -= 5;
        core.volume.game -= 5;
        core.volume.menu -= 5;
        setvolume(core, 2);
    } else if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 370 && core.game.pos.x < 550 &&
    core.game.pos.y > 665 && core.game.pos.y < 845) {
        core.volume.click += 5;
        core.volume.game += 5;
        core.volume.menu += 5;
        setvolume(core, 2);
    }
    return (core);
}

core_t check_status_vlm(struct core_s core)
{
    if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 166 && core.game.pos.x < 345 && core.game.pos.y > 443
    && core.game.pos.y < 623) {
        sfSound_setVolume(core.music.click_sound, 60);
        sfSound_setVolume(core.music.game_sound, 10);
        sfSound_setVolume(core.music.menu_sound, 15);
        sfSound_setVolume(core.music.fight_sound, 20);
        sfSound_setVolume(core.music.damage_sound, 20);
        sfSound_setVolume(core.music.sword_sound, 20);
    } else if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 370 && core.game.pos.x < 550 && core.game.pos.y > 443
    && core.game.pos.y < 623) {
        sfSound_setVolume(core.music.click_sound, 0);
        sfSound_setVolume(core.music.game_sound, 0);
        sfSound_setVolume(core.music.menu_sound, 0);
        sfSound_setVolume(core.music.fight_sound, 0);
        sfSound_setVolume(core.music.damage_sound, 0);
        sfSound_setVolume(core.music.sword_sound, 0);
    }
    return (core);
}

core_t check_status_ips(struct core_s core)
{
    if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 1464 && core.game.pos.x < 1645 && core.game.pos.y > 435
    && core.game.pos.y < 570)
        sfRenderWindow_setFramerateLimit(core.game.window, 30);
    else if (core.game.event.type == sfEvtMouseButtonPressed &&
    core.game.pos.x > 1473 && core.game.pos.x < 1657 && core.game.pos.y > 695 &&
    core.game.pos.y < 845)
        sfRenderWindow_setFramerateLimit(core.game.window, 60);
    if (core.game.event.type == sfEvtMouseButtonPressed && core.game.pos.x > 18
    && core.game.pos.x < 195 && core.game.pos.y > 15 && core.game.pos.y < 193)
        core.game.status = 0;
    return (core);
}

void setvolume(core_t core, int i)
{
    if (i == 1) {
        sfSound_setVolume(core.music.fight_sound, core.volume.fight);
        sfSound_setVolume(core.music.damage_sound, core.volume.damage);
        sfSound_setVolume(core.music.sword_sound, core.volume.sword);
    }
    if (i == 2) {
        sfSound_setVolume(core.music.click_sound, core.volume.click);
        sfSound_setVolume(core.music.game_sound, core.volume.game);
        sfSound_setVolume(core.music.menu_sound, core.volume.menu);
    }
}