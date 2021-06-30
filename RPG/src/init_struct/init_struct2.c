/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

music_t init_music(struct music_s music)
{
    music.click_buffer =
    sfSoundBuffer_createFromFile("assets/music/click_effect.ogg");
    music.click_sound = sfSound_create();
    sfSound_setBuffer(music.click_sound, music.click_buffer);
    sfSound_setVolume(music.click_sound, 60);
    music.game_buffer =
    sfSoundBuffer_createFromFile("assets/music/game_music.ogg");
    music.game_sound = sfSound_create();
    sfSound_setBuffer(music.game_sound, music.game_buffer);
    sfSound_setLoop(music.game_sound, sfTrue);
    sfSound_setVolume(music.game_sound, 10);
    music.damage_buffer =
    sfSoundBuffer_createFromFile("assets/music/damage_effect.ogg");
    music.damage_sound = sfSound_create();
    sfSound_setBuffer(music.damage_sound, music.damage_buffer);
    music = init_music2(music);
    return (music);
}

music_t init_music2(struct music_s music)
{
    music.sword_buffer =
    sfSoundBuffer_createFromFile("assets/music/sword_effect.ogg");
    music.sword_sound = sfSound_create();
    sfSound_setBuffer(music.sword_sound, music.sword_buffer);
    music.menu_buffer =
    sfSoundBuffer_createFromFile("assets/music/menu_music.ogg");
    music.menu_sound = sfSound_create();
    sfSound_setBuffer(music.menu_sound, music.menu_buffer);
    sfSound_setLoop(music.menu_sound, sfTrue);
    sfSound_setVolume(music.menu_sound, 15);
    music.fight_buffer =
    sfSoundBuffer_createFromFile("assets/music/fight_music.ogg");
    music.fight_sound = sfSound_create();
    sfSound_setBuffer(music.fight_sound, music.fight_buffer);
    sfSound_setLoop(music.fight_sound, sfTrue);
    sfSound_setVolume(music.fight_sound, 20);
    return (music);
}

stats_t init_stats(struct stats_s stats)
{
    stats.font = sfFont_createFromFile("assets/font.ttf");
    stats.lvl = 1;
    stats.tlvl = sfText_create();
    sfText_setPosition(stats.tlvl, get_pos(550, 270));
    sfText_setString(stats.tlvl, rvatoi(stats.lvl));
    sfText_setFont(stats.tlvl, stats.font);
    sfText_setColor(stats.tlvl, sfBlack);
    sfText_setCharacterSize(stats.tlvl, 30);
    stats.str = 1;
    stats.tstr = sfText_create();
    sfText_setPosition(stats.tstr, get_pos(550, 420));
    sfText_setString(stats.tstr, rvatoi(stats.str));
    sfText_setFont(stats.tstr, stats.font);
    sfText_setColor(stats.tstr, sfBlack);
    sfText_setCharacterSize(stats.tstr, 30);
    stats.speed = 5;
    stats.weapon_str = 3;
    stats = init_stats2(stats);
    return (stats);
}

stats_t init_stats2(struct stats_s stats)
{
    stats.xp = 0;
    stats.txp = sfText_create();
    sfText_setPosition(stats.txp, get_pos(470, 500));
    sfText_setString(stats.txp, rvatoi(stats.xp));
    sfText_setFont(stats.txp, stats.font);
    sfText_setColor(stats.txp, sfBlack);
    sfText_setCharacterSize(stats.txp, 30);
    stats.xp_up = 4;
    stats.txp_up = sfText_create();
    sfText_setPosition(stats.txp_up, get_pos(630, 500));
    sfText_setString(stats.txp_up, rvatoi(stats.xp_up));
    sfText_setFont(stats.txp_up, stats.font);
    sfText_setColor(stats.txp_up, sfBlack);
    sfText_setCharacterSize(stats.txp_up, 30);
    stats = init_stats3(stats);
    return (stats);
}

stats_t init_stats3(struct stats_s stats)
{
    stats.pv = 20;
    stats.tpv = sfText_create();
    sfText_setPosition(stats.tpv, get_pos(470, 355));
    sfText_setString(stats.tpv, rvatoi(stats.pv));
    sfText_setFont(stats.tpv, stats.font);
    sfText_setColor(stats.tpv, sfBlack);
    sfText_setCharacterSize(stats.tpv, 30);
    stats.pvmax = 20;
    stats.tpvmax = sfText_create();
    sfText_setPosition(stats.tpvmax, get_pos(630, 355));
    sfText_setString(stats.tpvmax, rvatoi(stats.pvmax));
    sfText_setFont(stats.tpvmax, stats.font);
    sfText_setColor(stats.tpvmax, sfBlack);
    sfText_setCharacterSize(stats.tpvmax, 30);
    return (stats);
}