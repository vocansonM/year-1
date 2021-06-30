/*
** EPITECH PROJECT, 2021
** collision_right
** File description:
** collision_right
*/

#include "../../include/rpg.h"

int xoyor(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.x == 1830 && core.character.vect.y > 495
        && core.character.vect.y < 849) || (core.character.vect.x == 1050
        && core.character.vect.y > 110 && core.character.vect.y < 277)
        || (core.character.vect.x == 1110 && core.character.vect.y > 224
        && core.character.vect.y < 366) || (core.character.vect.x == 1040
        && core.character.vect.y > 366 && core.character.vect.y < 600)
        || (core.character.vect.x == 970 && core.character.vect.y > 529
        && core.character.vect.y < 800) || (core.character.vect.x == 850
        && core.character.vect.y > 649 && core.character.vect.y < 850)
        || (core.character.vect.x == 730 && core.character.vect.y > 711
        && core.character.vect.y < 900) || (core.character.vect.x == 610
        && core.character.vect.y > 767 && core.character.vect.y < 980)
        || (core.character.vect.x == 550 && core.character.vect.y > 825
        && core.character.vect.y < 1050) || (core.character.vect.x == 670
        && core.character.vect.y > 0 && core.character.vect.y < 250)
        || (core.character.vect.x == 610 && core.character.vect.y > 111
        && core.character.vect.y < 188))
            return (1);
    } return (0);
}

int xoyixiyor(core_t core)
{
    if (core.background.x == 1 && core.background.y == 0) {
        if ((core.character.vect.x == -20 && core.character.vect.y > 415
        && core.character.vect.y < 485) || (core.character.vect.x == 30
        && core.character.vect.y > 800 && core.character.vect.y < 919)
        || (core.character.vect.x == 340 && core.character.vect.y > 11
        && core.character.vect.y < 287) || (core.character.vect.x == -30
        && core.character.vect.y > 413 && core.character.vect.y < 600)
        || (core.character.vect.x == 890 && core.character.vect.y > 187
        && core.character.vect.y < 307) || (core.character.vect.x == 940
        && core.character.vect.y > 298 && core.character.vect.y < 1100)
        || (core.character.vect.x == 710 && core.character.vect.y > -40
        && core.character.vect.y < 20) || (core.character.vect.x == 1060
        && core.character.vect.y > 0 && core.character.vect.y < 1100))
            return (1);
    } return (0);
}

int xiyir(core_t core)
{
    if (core.background.x == 1 && core.background.y == 1) {
        if ((core.character.vect.x == 280 && core.character.vect.y > 150
        && core.character.vect.y < 210)
        || (core.character.vect.x == 220 && core.character.vect.y > 196
        && core.character.vect.y < 410)
        || (core.character.vect.x == 470 && core.character.vect.y > 580
        && core.character.vect.y < 904)
        || (core.character.vect.x == 770 && core.character.vect.y > 380
        && core.character.vect.y < 650)
        || (core.character.vect.x == 710 && core.character.vect.y > 890
        && core.character.vect.y < 1100))
            return (1);
    }
    if (xoyor2xoyir(core) == 1)
        return (1);
    return (0);
}

int xoyor2xoyir(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0) {
        if ((core.character.vect.x == 1720 && core.character.vect.y > 844
        && core.character.vect.y < 1028) || (core.character.vect.x == 1720
        && core.character.vect.y > 412 && core.character.vect.y < 717)
        || (core.character.vect.x == 1720 && core.character.vect.y > 0
        && core.character.vect.y < 83) || (core.character.vect.x == 1470
        && core.character.vect.y > 87 && core.character.vect.y < 310))
            return (1);
    }
    if (core.background.x == 0 && core.background.y == 1) {
        if ((core.character.vect.x == 620 && core.character.vect.y > 889
        && core.character.vect.y < 1080) || (core.character.vect.x == 1480
        && core.character.vect.y > 471 && core.character.vect.y < 597)
        || (core.character.vect.x == 1480 && core.character.vect.y > 709
        && core.character.vect.y < 779) || (core.character.vect.x == 1730
        && core.character.vect.y > 717 && core.character.vect.y < 927)
        || (core.character.vect.x == 990 && core.character.vect.y > 651
        && core.character.vect.y < 720))
            return (1);
    } return (0);
}

int boss_right(core_t core)
{
    if (core.background.x == 5 && core.background.y == 0) {
        if ((core.character.vect.x == 1540 && core.character.vect.y > 0 &&
        core.character.vect.y < 1200)
        || (core.character.vect.x == 1050 && core.character.vect.y > 970 &&
        core.character.vect.y < 1200))
            return (1);
    } return (0);
}