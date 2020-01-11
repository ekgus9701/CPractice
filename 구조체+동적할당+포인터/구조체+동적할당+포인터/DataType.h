#pragma once
#include <stdio.h>
 
typedef struct weapon{
    char *name;
    int power;
}Weapon;
 
typedef struct player{
    char *name;
    Weapon *w;
    int power;
    int hp;
}Player;