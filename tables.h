//
// Created by rajmond on 4/6/2021.
//

#ifndef ELSOPROJEKT_TABLES_H
#define ELSOPROJEKT_TABLES_H

#include <string.h>
#include <stdlib.h>
#include "users.h"
#include "cards.h"

typedef struct {
    char *name;
    int *cards;
    int *users;
    int numberOfUsers;
    int numberOfCards;
} Table;

Table* createTable (char *name);

void addUserToTable (int, Table*);

void addCardToTable(int, Table*);

void printTable(Table*);

#endif //ELSOPROJEKT_TABLES_H
