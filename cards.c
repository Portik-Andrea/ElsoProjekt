//
// Created by Zsolt on 3/25/2021.
//

#include "cards.h"

cards create(){
    cards a;
    a.status=TO_DO;
    a.presentid=-1;
    a.sizeold=0;
    printf("Mi legyen a kartya neve?\n");
    scanf("%s",a.name);
    printf("A kartya leirasa?\n");
    scanf("%s",a.description);
    printf("Szeretne hozza rendelni az elso felhasznalot?(Y/N)\n");
    char v[20];
    scanf("%s",v);
    if (strcmp(v,"Y")==0){
        int id;
        printf("Addja meg a felhasznalo ID-jat");
        scanf("%d",&id);
        adduser(&a,id);
    }
    printf("A kartya sikeresen letrejott\n");
    return a;
}

void addUser(cards*, int){
    if ((*a).presentid==-1){
        (*a).presentid=id;
    }else{
        (*a).sizeold++;
        (*a).oldids=(int*)malloc(sizeof(int)*(*a).sizeold);
        (*a).oldids[(*a).sizeold-1]=(*a).presentid;
        (*a).presentid=id;
    }
}

void deleteCard(cards*){
    free((*a).oldids);
}
void setStatus(cards*, int){
    (*a).status=b;
}
void setDescription(cards*, char*){
    strcpy((*a).description,b);
}
void setName(cards*, char*){
    strcpy((*a).name,b);
}
int getStatus(cards){
    return a.status;
}

char* getName(cards){
    return a.name;
}
char* getDescription(cards){
    return a.description;
}
void printIds(cards){
    printf("Jelenlegi felhasznalo idja: %d\n",a.presentid);
    printf("A kovetkezo szemelyek dolgoztak meg rajta: ");
    for(int i=0;i<a.sizeold;i++){
        printf("%d ",a.oldids[i]);
    }
}