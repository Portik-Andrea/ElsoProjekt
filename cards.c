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

void adduser(cards* a,int id){
    if ((*a).presentid==-1){
        (*a).presentid=id;
    }else{
        (*a).sizeold++;
        (*a).oldids=(int*)malloc(sizeof(int)*(*a).sizeold);
        (*a).oldids[(*a).sizeold-1]=(*a).presentid;
        (*a).presentid=id;
    }
}

void deletcard(cards* a){
    free((*a).oldids);
}
void setstatus(cards* a,int b){
    (*a).status=b;
}
void setdescription(cards* a,char* b){
    strcpy((*a).description,b);
}
void setname(cards* a,char* b){
    strcpy((*a).name,b);
}
int getstatus(cards a){
    return a.status;
}

char* getname(cards a){
    return a.name;
}
char* getdescription(cards a){
    return a.description;
}
void printids(cards a){
    printf("Jelenlegi felhasznalo idja: %d\n",a.presentid);
    printf("A kovetkezo szemelyek dolgoztak meg rajta: ");
    for(int i=0;i<a.sizeold;i++){
        printf("%d ",a.oldids[i]);
    }
}