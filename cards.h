//
// Created by Zsolt on 4/16/2021.
//

#ifndef LOCALISPROJEKT_CARDS_H
#define LOCALISPROJEKT_CARDS_H
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
    char presentid[20];
    char** oldids;
    int sizeold;
} CARD;

typedef struct{
    int numofcards;
    CARD* cardlist;
} CARDS;

int findCard(char*,CARDS);


void createCards(CARDS*);
void addCard(CARDS*,char*);
void addNewUser(CARDS *,char*);

void deleteCard(CARDS *,int);//findcard
void printOldids(CARD);

void setStatus(CARD *);

void setData(CARDS*,int i);

void setDescription(CARDS*,int i);

void setName(CARDS*,int i);

void getStatus(CARD);

char *getName(CARD);

char *getDescription(CARD);

void printAccordToStatus(CARDS);

void printIds(CARD);


#endif //LOCALISPROJEKT_CARDS_H
