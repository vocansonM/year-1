/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "../../include/rpg.h"

int xoyod(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.y == 100 && core.character.vect.x > 0
        && core.character.vect.x < 290) || (core.character.vect.y == 160
        && core.character.vect.x > 250 && core.character.vect.x < 350)
        || (core.character.vect.y == 410 && core.character.vect.x > 240
        && core.character.vect.x < 410) || (core.character.vect.y == 470
        && core.character.vect.x > 240 && core.character.vect.x < 470)
        || (core.character.vect.y == 650 && core.character.vect.x > 240
        && core.character.vect.x < 530) || (core.character.vect.y == 900
        && core.character.vect.x > 240 && core.character.vect.x < 610)
        || (core.character.vect.y == 530 && core.character.vect.x > 985
        && core.character.vect.x < 1090) || (core.character.vect.y == 80
        && core.character.vect.x > 1480 && core.character.vect.x < 1760)
        || (core.character.vect.y == 130 && core.character.vect.x > 640
        && core.character.vect.x < 750))
            return (1);
        if (xoyod_bis(core) == 1)
            return (1);
    } return (0);
}

int xoyod_bis(core_t core)
{
    if ((core.character.vect.y == 970 && core.character.vect.x > 920
    && core.character.vect.x < 1820) || (core.character.vect.y == 900
    && core.character.vect.x > 1800 && core.character.vect.x < 1920)
    || (core.character.vect.y == 850 && core.character.vect.x > 1720
    && core.character.vect.x < 1815) || (core.character.vect.y == 420
    && core.character.vect.x > 1720 && core.character.vect.x < 1815)
    || (core.character.vect.y == 370 && core.character.vect.x > 1040
    && core.character.vect.x < 1220) || (core.character.vect.y == 240
    && core.character.vect.x > 1100 && core.character.vect.x < 1290)
    || (core.character.vect.y == 290 && core.character.vect.x > 1290
    && core.character.vect.x < 1350) || (core.character.vect.y == 840
    && core.character.vect.x > 600 && core.character.vect.x < 900)
    || (core.character.vect.y == 770 && core.character.vect.x > 660
    && core.character.vect.x < 900) || (core.character.vect.y == 710
    && core.character.vect.x > 780 && core.character.vect.x < 910)
    || (core.character.vect.y == 670 && core.character.vect.x > 900
    && core.character.vect.x < 1050))
        return (1);
    return (0);
}

int xoyixiyod(core_t core)
{
    if (core.background.x == 1 && core.background.y == 0) {
        if ((core.character.vect.y == 470 && core.character.vect.x > 0
        && core.character.vect.x < 30) || (core.character.vect.y == 410
        && core.character.vect.x > 40 && core.character.vect.x < 370)
        || (core.character.vect.y == 470 && core.character.vect.x > 360
        && core.character.vect.x < 440) || (core.character.vect.y == 530
        && core.character.vect.x > 430 && core.character.vect.x < 520)
        || (core.character.vect.y == 900 && core.character.vect.x > 480
        && core.character.vect.x < 1400) || (core.character.vect.y == 0
        && core.character.vect.x > 360 && core.character.vect.x < 900)
        || (core.character.vect.y == 910 && core.character.vect.x > -40
        && core.character.vect.x < 300))
            return (1);
    } return (0);
}

int xiyid(core_t core)
{
    if (core.background.x == 1 && core.background.y == 1) {
        if ((core.character.vect.y == 190 && core.character.vect.x > 240
        && core.character.vect.x < 500) || (core.character.vect.y == 570
        && core.character.vect.x > 480 && core.character.vect.x < 1000))
            return (1);
    } if (core.background.x == 0 && core.background.y == 1) {
        if ((core.character.vect.y == 860 && core.character.vect.x > 620
        && core.character.vect.x < 1310) || (core.character.vect.y == 710
        && core.character.vect.x > 1720 && core.character.vect.x < 1810)
        || (core.character.vect.y == 710 && core.character.vect.x > 1540
        && core.character.vect.x < 1620) || (core.character.vect.y == 470
        && core.character.vect.x > 1480 && core.character.vect.x < 1560)
        || (core.character.vect.y == 350 && core.character.vect.x > 1540
        && core.character.vect.x < 1820) || (core.character.vect.y == 470
        && core.character.vect.x > 1290 && core.character.vect.x < 1380)
        || (core.character.vect.y == 460 && core.character.vect.x > 1240
        && core.character.vect.x < 1320) || (core.character.vect.y == 460
        && core.character.vect.x > 1000 && core.character.vect.x < 1320))
            return (1);
    } return (0);
}

int boss_down(core_t core)
{
    if (core.background.x == 5 && core.background.y == 0) {
        if ((core.character.vect.y == 940 && core.character.vect.x > 0
        && core.character.vect.x < 810) || (core.character.vect.y == 940
        && core.character.vect.x > 1070 && core.character.vect.x < 1920))
            return (1);
    } return (0);
}