//
// Created by Zsolt on 4/16/2021.
//

#ifndef LOCALISPROJEKT_TABLES_H
#define LOCALISPROJEKT_TABLES_H

#include <string.h>
#include <stdlib.h>
#include "users.h"
#include "cards.h"

typedef struct {
    char name[20];
    CARDS cards;
    char** idlist;
    int numofids;

} TABLA;

typedef struct {
    TABLA* tablelist;
    USERS users;
    int numberOfTables;
}TABLES;

void createTables (TABLES* );
void addTable(TABLES* );
int findTable(char*,TABLES);
int findIdInTable(TABLA tabla,char* id);
void deleteTable(TABLES*);
void addUserToUsers(TABLES *tables);
void addUserToTable (TABLES* ,char*);
void deletUserFromTable(TABLES*);

void addCardToTable(TABLA*);

void printTable(TABLES);

#endif //LOCALISPROJEKT_TABLES_H
