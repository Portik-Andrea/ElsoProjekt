//
// Created by Zsolt on 4/16/2021.
//

#include "tables.h"
#include <string.h>
#include <stdio.h>



//void addCardToTable(TABLES*);



void createTables(TABLES *tables) {
    (*tables).tablelist = (TABLA *) malloc(0);
    if ((*tables).tablelist == NULL) {
        printf("Helyfoglalasi hiba!\n");
    }
    (*tables).numberOfTables = -1;
    createUsers(&(*tables).users);
}
void addTable(TABLES *tables){
    char temp[20];
    printf("Adja meg az uj tabla nevet.\n");
    scanf("%s",temp);

    while(findTable(temp,(*tables))!=-1){
        printf("Ez a nev mar letezik kerem adjon mas nevet\n");
        scanf("%s",temp);
    }
    (*tables).numberOfTables++;
    (*tables).tablelist = (TABLA *) realloc((*tables).tablelist,((*tables).numberOfTables+1)*sizeof(TABLA));

    strcpy((*tables).tablelist[(*tables).numberOfTables].name,temp);
    createCards(&(*tables).tablelist[(*tables).numberOfTables].cards);
    (*tables).tablelist[(*tables).numberOfTables].idlist=(char**)malloc(0);
    (*tables).tablelist[(*tables).numberOfTables].numofids=-1;

}

int findTable(char* name,TABLES tables){
    for(int i=0;i<=tables.numberOfTables;i++){
        if (strcmp(tables.tablelist[i].name,name)==0){
            return i;
        }
    }
    return -1;
}

void addUserToUsers(TABLES *tables){
    char name[20];
    printf("Adja meg a felhasznalo nevet\n");
    scanf("%s",name);
    insertUser((&(*tables).users),name);
    printf("Felhasznaloi nev: %s\n\t     kod: %s\n",(*tables).users.persons[(*tables).users.numusers].name,(*tables).users.persons[(*tables).users.numusers].id);
}

void addUserToTable (TABLES *tables,char* id) {

    char tablename[20];
    if(findUser(id,(*tables).users)==-1){
        printf("Ez az id nem letezik\n");
        return;
    }
    printf("Adja meg hogy melyik tablahoz szeretne hozza adni\n");
    scanf("%s",tablename);

    int i=findTable(tablename,(*tables));
    if (i==-1){
        printf("Ez a tabla nem letezik\n");
        return ;
    }

    (*tables).tablelist[i].numofids++;
    (*tables).tablelist[i].idlist=(char**)realloc( (*tables).tablelist[i].idlist,((*tables).tablelist[i].numofids+1)*sizeof(char*));
    (*tables).tablelist[i].idlist[ (*tables).tablelist[i].numofids]=(char*)malloc(20*sizeof(char));

    strcpy((*tables).tablelist[i].idlist[(*tables).tablelist[i].numofids],id);

}

int findIdInTable(TABLA tabla,char* id){
    for(int i=0;i<=tabla.numofids;i++){
        if(strcmp(tabla.idlist[i],id)==0){
            return i;
        }
    }
    return -1;
}

void deletUserFromTable(TABLES *tables){
    char id[20];
    char tablename[20];
    printf("Adja meg a felhasznalo azonositojat amit ki akar torolni\n");
    scanf("%s",id);

    printf("Adja meg hogy melyik tablabol szeretne kitorolni\n");
    scanf("%s",tablename);
    int j=findIdInTable((*tables).tablelist[findTable(tablename,(*tables))],id);
    if (j==-1){
        printf("Ez az azonosito nincs a tablaban");
        return ;
    }
    int i=findTable(tablename,(*tables));
    if (i==-1){
        printf("Ez a tabla nem letezik");
        return ;
    }

    for(;j<(*tables).tablelist[i].numofids;j++){
        strcpy((*tables).tablelist[i].idlist[j],(*tables).tablelist[i].idlist[j+1]);
    }
    free((*tables).tablelist[i].idlist[(*tables).tablelist[i].numofids]);
    (*tables).tablelist[i].idlist=(char**)realloc((*tables).tablelist[i].idlist,(*tables).tablelist[i].numofids*sizeof(char*));
    (*tables).tablelist[i].numofids--;


}

void addCardToTable (TABLA *table) {
    char id[20];
    printf("Adja meg a felhasznalo azonositojat aki a kartyan dolgozni fog.\n");
    scanf("%s",id);

    int j=findIdInTable((*table),id);
    if (j==-1){
        printf("Ez az azonosito nincs a megadott tablaban\n");
        return ;
    }
    addCard(&(*table).cards,id);

}

void deleteTable(TABLES* tables){
    printf("Adja be a tabla nevet\n");
    char tableName[20];
    scanf("%s",tableName);
    int i=findTable(tableName,(*tables));
    if(i==-1){
        printf("Ez a tabla nem letezik\n");
        return;
    }
    for(;i<(*tables).numberOfTables;i++){

        (*tables).tablelist[i]=(*tables).tablelist[i+1];
    }
    (*tables).numberOfTables--;
    (*tables).tablelist=(TABLA*)realloc( (*tables).tablelist, ((*tables).numberOfTables+1) * sizeof (TABLA));
}

void printTable(TABLES tables) {
    for(int i=0;i<=tables.numberOfTables;i++){
        printf("A tabla neve %s, a kartyak pedig a kovetkezok:\n", tables.tablelist[i].name);
        if(tables.tablelist[i].cards.numofcards==-1){
            printf("Nincs kartya ezen a tablan\n");
        }
        for (int j = 0; j<=tables.tablelist[i].cards.numofcards ; j++) {
            printf("    %s\n",tables.tablelist[i].cards.cardlist[j].name);
        }
    }

}
