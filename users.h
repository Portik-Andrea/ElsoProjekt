//
// Created by porti on 2021. 03. 25..
//

#ifndef ELSOPROJEKT_USERS_H
#define ELSOPROJEKT_USERS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct {
    char name[20];
    char id[20];
} PERSON;

typedef struct {
    int maxid;
    int numusers;
    PERSON *persons;
} USERS;

void createUsers(USERS *users);
int findUser(char*,USERS);
void insertUser(USERS *users, char *name);
void deletUser(USERS *users,char *id);

#endif //ELSOPROJEKT_USERS_H
