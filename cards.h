//
// Created by Zsolt on 3/25/2021.
//

#ifndef ELSOPROJEKT_CARDS_H
#define ELSOPROJEKT_CARDS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum status {
    TO_DO, DOING, DONE
};


typedef struct {
    char name[20];
    char description[200];
    int status;
    int presentid;
    int *oldids;
    int sizeold;
} cards;

cards create();

void addUser(cards *, int);

void deleteCard(cards *);

void setStatus(cards *, int);

void setDescription(cards *, char *);

void setName(cards *, char *);

int getStatus(cards);

char *getName(cards);

char *getDescription(cards);

void printIds(cards);


#endif //ELSOPROJEKT_CARDS_H
