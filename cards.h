//
// Created by Zsolt on 3/25/2021.
//

#ifndef ELSOPROJEKT_CARDS_H
#define ELSOPROJEKT_CARDS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum status{TO_DO,DOING,DONE};


typedef struct {
    char name[20];
    char description[200];
    int status;
    int presentid;
    int* oldids;
    int sizeold;
} cards;

cards create();
void adduser(cards*,int);
void deletcard(cards*);
void setstatus(cards*,int);
void setdescription(cards*,char*);
void setname(cards*,char*);
int getstatus(cards);
char* getname(cards);
char* getdescription(cards);
void printids(cards);




#endif //ELSOPROJEKT_CARDS_H
