#pragma once
#include <stdio.h>
#include "DataType.h"

int get_number(char *str);
int makePlayers(Player **p_addr);
int *makeWeapons(Weapon **w_addr);
int makeName(char **name_addr);
void setPlayer(Player *p);
void setWeapon(Weapon *p);
void show_Players(Player *p,Weapon *w, int 인원, int 무기개수);
void attack(Player hunter,Player *target);
void showPlayer(Player p);
 