/*
** EPITECH PROJECT, 2021
** mouse
** File description:
** mouse
*/

#include "../../include/rpg.h"

mouse_t init_mouse(struct mouse_s mouse)
{
    mouse.hand = sfTexture_createFromFile("assets/hand.png", NULL);
    mouse.handsprite = sfSprite_create();
    sfSprite_setTexture(mouse.handsprite, mouse.hand, sfTrue);
    return (mouse);
}