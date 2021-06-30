/*
** EPITECH PROJECT, 2021
** collision_up
** File description:
** collision_up
*/

#include "../../include/rpg.h"

int xoyou(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.y == 20 && core.character.vect.x > 740 &&
        core.character.vect.x < 1270) || (core.character.vect.y == 80 &&
        core.character.vect.x > 740 && core.character.vect.x < 1210) ||
        (core.character.vect.y == 140 && core.character.vect.x > 740 &&
        core.character.vect.x < 1100) || (core.character.vect.y == 210 &&
        core.character.vect.x > 740 && core.character.vect.x < 900) ||
        (core.character.vect.y == 270 && core.character.vect.x > 720 &&
        core.character.vect.x < 780) || (core.character.vect.y == 210 &&
        core.character.vect.x > 630 && core.character.vect.x < 720) ||
        (core.character.vect.y == 30 && core.character.vect.x > 630 &&
        core.character.vect.x < 720) || (core.character.vect.y == 270 &&
        core.character.vect.x > 1050 && core.character.vect.x < 1163) ||
        (core.character.vect.y == 680 && core.character.vect.x > 1720 &&
        core.character.vect.x < 1815) || (core.character.vect.y == 250 &&
        core.character.vect.x > 1720 && core.character.vect.x < 1815) ||
        (core.character.vect.y == 250 && core.character.vect.x > 700 &&
        core.character.vect.x < 800))
            return (1);
    } return (0);
}

int xoyou_bis(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.y == 910 && core.character.vect.x > 1890 &&
        core.character.vect.x < 1900) || (core.character.vect.y == 630 &&
        core.character.vect.x > 1039 && core.character.vect.x < 1284) ||
        (core.character.vect.y == 570 && core.character.vect.x > 1300 &&
        core.character.vect.x < 1370) || (core.character.vect.y == 320 &&
        core.character.vect.x > 1485 && core.character.vect.x < 1760))
            return (1);
    }
    return (0);
}

int xiyoxiyiu(core_t core)
{
    if (core.background.x == 1 && core.background.y == 0) {
        if ((core.character.vect.y == 310 && core.character.vect.x > 930 &&
        core.character.vect.x < 1030) || (core.character.vect.y == 250
        && core.character.vect.x > 970 && core.character.vect.x < 740)
        || (core.character.vect.y == 320 && core.character.vect.x > 380 &&
        core.character.vect.x < 780) || (core.character.vect.y == 860
        && core.character.vect.x > -40 && core.character.vect.x < 200)
        || (core.character.vect.y == 250 && core.character.vect.x > 650 &&
        core.character.vect.x < 1050))
            return (1);
    }
    if (core.background.x == 1 && core.background.y == 1) {
        if ((core.character.vect.y == 900 && core.character.vect.x > 470
        && core.character.vect.x < 780) || (core.character.vect.y == 410
        && core.character.vect.x > 230 && core.character.vect.x < 840)
        || (core.character.vect.y == 170 && core.character.vect.x > -40
        && core.character.vect.x < 360))
            return (1);
    }
    if (xoyou_bis(core) == 1) return (1);
    return (0);
}

int xoyiu(core_t core)
{
    if (core.background.x == 0 && core.background.y == 1) {
        if ((core.character.vect.y == 720 && core.character.vect.x > 0
        && core.character.vect.x < 370) || (core.character.vect.y == 660
        && core.character.vect.x > 100 && core.character.vect.x < 1150)
        || (core.character.vect.y == 720 && core.character.vect.x > 1010
        && core.character.vect.x < 1330) || (core.character.vect.y == 1040
        && core.character.vect.x > 1200 && core.character.vect.x < 1350)
        || (core.character.vect.y == 910 && core.character.vect.x > 1750
        && core.character.vect.x < 1850) || (core.character.vect.y == 780
        && core.character.vect.x > 1510 && core.character.vect.x < 1630)
        || (core.character.vect.y == 600 && core.character.vect.x > 1505
        && core.character.vect.x < 1600) || (core.character.vect.y == 590
        && core.character.vect.x > 1570 && core.character.vect.x < 1830)
        || (core.character.vect.y == 160 && core.character.vect.x > 1400
        && core.character.vect.x < 1940) || (core.character.vect.y == 350
        && core.character.vect.x > 1320 && core.character.vect.x < 1600)
        || (core.character.vect.y == 360 && core.character.vect.x > 1260
        && core.character.vect.x < 1360) || (core.character.vect.y == 530
        && core.character.vect.x > 1250 && core.character.vect.x < 1400))
            return (1);
    } return (0);
}

int boss_up(core_t core)
{
    if (core.background.x == 5 && core.background.y == 0)
        if (core.character.vect.y == 70 && core.character.vect.x > 0 &&
        core.character.vect.x < 1920)
            return (1);
    return (0);
}