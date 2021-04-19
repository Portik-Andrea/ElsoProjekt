//
// Created by porti on 2021. 03. 25..
//

#include "users.h"

void createUsers(USERS *users){
    (*users).maxid=1;
    (*users).persons=(PERSON *)malloc(0);
    (*users).numusers=-1;
    if((*users).persons==NULL){
        printf("Helyfoglalasi hiba!");
    }

}


void insertUser(USERS* users,char* name) {
    (*users).numusers++;
    (*users).persons=(PERSON *)realloc((*users).persons,((*users).numusers+1)*sizeof(PERSON));

    char idstring[20];
    sprintf(idstring,"%d",(*users).maxid);
    strcpy((*users).persons[(*users).numusers].id,"Trello");
    strcat((*users).persons[(*users).numusers].id,idstring);
    strcpy((*users).persons[(*users).numusers].name,name);

    (*users).maxid++;


}

void deletUser(USERS *users,char *id){
    int i=0;
    while((strcmp((*users).persons[i].id,id)!=0) && (i<(*users).numusers)){
        i++;
    }
    if (i==(*users).numusers){
        printf("Az adott azonosito nem szerepel a felhasznalok kozott.");
        return;
    }
    for(;i<(*users).numusers;i++){
        (*users).persons[i]=(*users).persons[i+1];
    }
    (*users).numusers--;
    (*users).persons=(PERSON *)realloc((*users).persons,((*users).numusers+1)*sizeof(PERSON));
}

int findUser(char* id,USERS users){
    for(int i=0;i<=users.numusers;i++){
        if (strcmp(id,users.persons[i].id)==0){
            return i;
        }
    }
    return -1;
}