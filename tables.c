//
// Created by rajmond on 4/6/2021.
//

#include "tables.h"
#include <string.h>
#include <stdio.h>

Table* createTable(char *name) {
    Table* table = (Table*)malloc(sizeof(Table));
    table->name = (char*) malloc (strlen(name) * sizeof(char*));
    strcpy(table->name, name);
    table->users = (int*)malloc(5*sizeof(int));
    table->cards = (int*)malloc(5*sizeof(int));
    table->numberOfCards = 0;
    table->numberOfUsers = 0;
    return table;
}

void addUserToTable (int user, Table* table) {
    table->users[table->numberOfUsers] = user;
    table->numberOfUsers += 1;
}

void addCardToTable (int card, Table* table) {
    table->cards[table->numberOfCards] = card;
    table->numberOfCards += 1;
}

void printTable(Table* table) {
    printf("A tabla neve %s, a felhasznalok szama %i, a kartyak szama pedig %i\n", table->name, table->numberOfUsers, table->numberOfCards);
    for (int i = 0; i < table->numberOfUsers; i++) {
        printf("Az %i. felhasznalo %i\n",i, table->users[i]);
    }
    for (int i = 0; i < table->numberOfCards; i++) {
        printf("Az %i. kartya %i\n",i, table->cards[i]);
    }
}
