/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

int xoyol(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.x == 1400 && core.character.vect.y > 289
        && core.character.vect.y < 557) || (core.character.vect.x == 290
        && core.character.vect.y > 110 && core.character.vect.y < 250)
        || (core.character.vect.x == 1220 && core.character.vect.y > 0
        && core.character.vect.y < 63) || (core.character.vect.x == 1160
        && core.character.vect.y > 63 && core.character.vect.y < 260)
        || (core.character.vect.x == 910 && core.character.vect.y > 104
        && core.character.vect.y < 189) || (core.character.vect.x == 780
        && core.character.vect.y > 173 && core.character.vect.y < 249)
        || (core.character.vect.x == 40 && core.character.vect.y > 0
        && core.character.vect.y < 193) || (core.character.vect.x == 350
        && core.character.vect.y > 175 && core.character.vect.y < 473)
        || (core.character.vect.x == 410 && core.character.vect.y > 415
        && core.character.vect.y < 530) || (core.character.vect.x == 470
        && core.character.vect.y > 480 && core.character.vect.y < 740)
        || (core.character.vect.x == 530 && core.character.vect.y > 660
        && core.character.vect.y < 990))
            return (1);
    } return (0);
}

int xoyixiyol(core_t core)
{
    if (core.background.x == 0 && core.background.y == 1) {
        if ((core.character.vect.x == 40 && core.character.vect.y > 705
        && core.character.vect.y < 1100) || (core.character.vect.x == 360
        && core.character.vect.y > 651 && core.character.vect.y < 723)
        || (core.character.vect.x == 1330 && core.character.vect.y > 525
        && core.character.vect.y < 721) || (core.character.vect.x == 1340
        && core.character.vect.y > 886 && core.character.vect.y < 1021)
        || (core.character.vect.x == 1270 && core.character.vect.y > 1010
        && core.character.vect.y < 1100) || (core.character.vect.x == 1580
        && core.character.vect.y > 140 && core.character.vect.y < 347)
        || (core.character.vect.x == 1830 && core.character.vect.y > 475
        && core.character.vect.y < 600) || (core.character.vect.x == 1830
        && core.character.vect.y > 719 && core.character.vect.y < 915)
        || (core.character.vect.x == 1270 && core.character.vect.y > 0
        && core.character.vect.y < 515))
            return (1);
    }
    if (xiyol(core) == 1)
        return (1);
    return (0);
}

int xiyol(core_t core)
{
    if (core.background.x == 1 && core.background.y == 0) {
        if ((core.character.vect.x == 390 && core.character.vect.y > 421
        && core.character.vect.y < 495) || (core.character.vect.x == 450
        && core.character.vect.y > 475 && core.character.vect.y < 640)
        || (core.character.vect.x == 520 && core.character.vect.y > 537
        && core.character.vect.y < 1100) || (core.character.vect.x == 760
        && core.character.vect.y > 140 && core.character.vect.y < 320))
            return (1);
    }
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.x == 1280 && core.character.vect.y > -100
        && core.character.vect.y < 40) || (core.character.vect.x == 1090
        && core.character.vect.y > 606 && core.character.vect.y < 1015)
        || (core.character.vect.x == 1820 && core.character.vect.y > 0
        && core.character.vect.y < 317) || (core.character.vect.x == 1820
        && core.character.vect.y > 389 && core.character.vect.y < 727)
        || (core.character.vect.x == 1820 && core.character.vect.y > 809
        && core.character.vect.y < 1080) || (core.character.vect.x == 1330
        && core.character.vect.y > 270 && core.character.vect.y < 625))
            return (1);
    } return (0);
}

int boss_left(core_t core)
{
    if (core.background.x == 5 && core.background.y == 0) {
        if ((core.character.vect.x == 310 && core.character.vect.y > 0
        && core.character.vect.y < 1200) || (core.character.vect.x == 820
        && core.character.vect.y > 970 && core.character.vect.y < 1200))
            return (1);
    }
    return (0);
}