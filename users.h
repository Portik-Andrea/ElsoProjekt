//
// Created by porti on 2021. 03. 25..
//

#ifndef ELSOPROJEKT_USERS_H
#define ELSOPROJEKT_USERS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef  struct {
    char *name;
    bool exist;
}PERSON;

typedef  struct {
    int id;
    PERSON *persons;
}USERS;

//helyfoglalas a felhasznalo szamara
void createUsers(USERS *users);
//Van-e felhasznalo
bool emplyUsers(USERS users);
//felhasznalo letrehozasa
void insertUser(USERS* users,int id,char *name);
//kiirja a felfasznalokat
void printUsers(USERS users);
//helyfelszabaditas
void freeUsers(USERS *users);
#endif //ELSOPROJEKT_USERS_H
