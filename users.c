//
// Created by porti on 2021. 03. 25..
//

#include "users.h"

void createUsers(USERS *users){
    (*users).id=0;
    (*users).persons=(PERSON *)calloc(((*users).id+1),sizeof(PERSON));
    if((*users).persons==NULL){
        printf("hiba!");
    }
    for(int i=0;i<=(*users).id;++i){
        (*users).persons[i].name=(char *)calloc(30,sizeof(char ));
        if((*users).persons[i].name==NULL){
            printf("hiba!");
        }
    }
}
bool emplyUsers(USERS users){
    if(users.id==0){
        return true;
    }
    else{
        for(int i=0;i<=users.id;++i){
            if(users.persons[i].exist){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

void insertUser(USERS* users,int ID,char* name) {
    //megnezi, hogy az uj ID letezik-e es 5 szamjegyu szamnal kisebb-e
    //az ID meretet lehet valtoztatni
    if (ID > (*users).id && ID <= 9999) {
        (*users).id = ID;

        (*users).persons = (PERSON *) realloc ((*users).persons, ((*users).id + 1) * sizeof(PERSON));

        //helyfoglalas csak az ID-ik nevnek
        (*users).persons[ID].name = (char *) calloc(30, sizeof(char));
        if ((*users).persons[ID].name == NULL) {
            printf("hiba!");
        }

        //most mar letezik a ID indexnel levo szemely
        (*users).persons[ID].exist = true;

        strcpy((*users).persons[ID].name, name);
        printf("\tSikeresen letrejott a felhasznaloja!\n");

    } else if (ID <(*users).id && (*users).persons[ID].exist == 0 && ID>0) {
        //helyfoglalas csak az ID-ik nevnek
        (*users).persons[ID].name = (char *) calloc(30, sizeof(char));

        //most mar letezik a ID indexnel levo szemely
        (*users).persons[ID].exist = true;

        strcpy((*users).persons[ID].name, name);
        printf("\tSikeresen letrejott a felhasznaloja!\n");

    } else {
        printf("\tValami gond lehet az azonositoszammal!\n");
    }
}
void printUsers(USERS users){
    printf("\nA felhasznalok listaja:");
    for(int i=0;i<=users.id;++i){
        if(users.persons[i].exist==true){
            printf("\n\t%s",users.persons[i].name);
        }
    }
}
void freeUsers(USERS *users){
    for(int i=0;i<=(*users).id;++i){
        free((*users).persons[i].name);
    }
    free((*users).persons);
}