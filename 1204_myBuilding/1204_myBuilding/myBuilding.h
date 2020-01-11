#pragma once
#include <stdio.h>
#include "myBuilding.h"
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

int makeFloors(Person ***building_addr);
int makeNewFloors(Person ***building_addr);
void showBuilding(Person **building, int floor);
int makeRooms_inFloor(Person **building, int floor);
void changeRooms_inFloor(Person **building, int floor);
void getPeople(Person **building);
void showMenu();