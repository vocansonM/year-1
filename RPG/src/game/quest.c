/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../../include/rpg.h"

core_t first_quest(core_t core)
{
    if (core.background.x == 0 && core.background.y == 0 &&
    core.character.vect.x > 1370 && core.character.vect.x < 1470 &&
    core.character.vect.y > 620 && core.character.vect.y < 710
    && core.game.status == 4) {
        sfText_setPosition(core.quest.text, get_pos(1150, 540));
        sfText_setString(core.quest.text,
        "Bonjour, Mewtwo controle les jojos, bat les\n"
        "tous pour affronter Mewtwo, prend ces 50\n"
        "pieces, va a la boutique au Nord  et rejoint\n"
        "mon ami a l'Ouest. Bon courage aventurier !\n");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    } else {
        sfText_setString(core.quest.text, " ");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    }
    return (core);
}

core_t scnd_quest(core_t core)
{
    if (core.background.x == 0 && core.background.y == 1 &&
    core.character.vect.x > 125 && core.character.vect.x < 230 &&
    core.character.vect.y > 800 && core.character.vect.y < 890
    && core.game.status == 4) {
        sfText_setPosition(core.quest.text, get_pos(80, 700));
        sfText_setString(core.quest.text,
        "Vous etes le fameux sauveur decrit par Don Pepe, \n"
        "vous trouverez au fond de mon champ de fleur une\n"
        "epee ancestrale mais faites attention elle est\n"
        "bien gardee !\n");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    } else {
        sfText_setString(core.quest.text, " ");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    }
    return (core);
}

core_t third_quest(core_t core)
{
    if (core.game.status == 4 && core.background.x == 1
    && core.background.y == 0 && core.character.vect.x > 630
    && core.character.vect.x < 735 && core.character.vect.y > 235
    && core.character.vect.y < 340) {
        sfText_setPosition(core.quest.text, get_pos(500, 160));
        sfText_setString(core.quest.text,
        "Attention ceci est l'antre de Mewtwo le mechant, \n"
        "vous ne pourrez repartir de son territoire que si\n"
        "il est vaincu.\n"
        "Bonne chance !     E pour entrer dans le donjon.\n");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    } else {
        sfText_setString(core.quest.text, " ");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    }
    return (core);
}

core_t fourth_quest(core_t core)
{
    if (core.background.x == 0 && core.background.y == 1 &&
    core.character.vect.x > 1650 && core.character.vect.x < 1752 &&
    core.character.vect.y > 550 && core.character.vect.y < 633
    && core.game.status == 4) {
        sfText_setPosition(core.quest.text, get_pos(1500, 580));
        sfText_setString(core.quest.text, "E pour ouvrir le magasin.");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    } else {
        sfText_setString(core.quest.text, " ");
        sfRenderWindow_drawText(core.game.window, core.quest.text, NULL);
    }
    return (core);
}