#pragma once
#include <stdio.h>

typedef struct weapon{
    char name[100];
    int power;
}Weapon;

typedef struct player{
	char name[100];
	Weapon *w;
	int power;
	int hp;
}Player;

