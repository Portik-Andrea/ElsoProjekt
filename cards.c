//
// Created by Zsolt on 4/16/2021.
//

#include "cards.h"
void createCards(CARDS* cards){
    (*cards).cardlist=(CARD *)malloc(0);
    (*cards).numofcards=-1;
    if((*cards).cardlist==NULL){
        printf("Helyfoglalasi hiba!");
    }
}

void addCard(CARDS* cards,char* id)
{
    (*cards).numofcards++;
    (*cards).cardlist=(CARD *)realloc((*cards).cardlist,sizeof(CARD)*((*cards).numofcards+1));

    (*cards).cardlist[(*cards).numofcards].status=TO_DO;

    strcpy((*cards).cardlist[(*cards).numofcards].presentid,id);

    (*cards).cardlist[(*cards).numofcards].sizeold=-1;
    (*cards).cardlist[(*cards).numofcards].oldids=(char**)malloc(0);

    printf("Mi legyen a kartya neve?\n");
    char temp[20];
    scanf("%s",temp);
    while(findCard(temp,(*cards))!=-1){
        printf("Ez kartya mar letezik kerem irjon be mas nevet\n");
        scanf("%s",temp);
    }
    strcpy((*cards).cardlist[(*cards).numofcards].name,temp);
    char szemet[20];

    printf("A kartya leirasa?\n");
    fgets(szemet, sizeof( szemet ), stdin);
    fgets((*cards).cardlist[(*cards).numofcards].description, sizeof( (*cards).cardlist[(*cards).numofcards].description ), stdin);


    printf("A kartya sikeresen letrejott\n");

}

int findCard(char* name,CARDS cards){
    for(int i=0;i<=cards.numofcards;i++){
        if (strcmp(cards.cardlist[i].name,name)==0){
            return i;
        }
    }
    return -1;
}

void deleteCard(CARDS* cards,int i){
    for(;i<(*cards).numofcards;i++){
        (*cards).cardlist[i]=(*cards).cardlist[i+1];
    }
    (*cards).numofcards--;
    (*cards).cardlist=(CARD*)realloc( (*cards).cardlist, ((*cards).numofcards+1) * sizeof (CARD));

}

void addNewUser(CARDS *cards, char* id){
    char cardname[20];
    printf("Adja meg a kartya nevet:\n");
    scanf("%s",cardname);

    int i=findCard(cardname,(*cards));
    if(i==-1){
        printf("Ez a kartya nem letezik.");
        return;
    }

    (*cards).cardlist[i].sizeold++;
    (*cards).cardlist[i].oldids[(*cards).cardlist[i].sizeold]=(char*) malloc (sizeof(char)*20);
    strcpy((*cards).cardlist[i].oldids[(*cards).cardlist[i].sizeold],(*cards).cardlist[i].presentid);
    strcpy((*cards).cardlist[i].presentid,id);
}
void printOldids(CARD card){
    for(int i=0;i<=card.sizeold;i++){
        printf("%s, ",card.oldids[i]);
    }
    printf("\n");

}
void getStatus(CARD card){

    switch (card.status) {
        case 0:printf("TO DO\n");break;
        case 1:printf("DOING\n");break;
        case 2:printf("DONE\n");break;
    }

}
void setStatus(CARD *card ){
    char status[6];
    printf("Mi legyen a kartya uj statusza?\n");
    scanf("%s",status);
    if(strcmp("TO_DO",status)==0){
        (*card).status=TO_DO;
        printf("A kartya statusza megvaltozott.\n");
        printf("%d\n",(*card).status);
        return;
    }
    if(strcmp("DONE",status)==0){
        (*card).status=DONE;
        printf("A kartya statusza megvaltozott.\n");
        printf("%d\n",(*card).status);
        return;
    }
    if(strcmp("DOING",status)==0){
        (*card).status=DOING;
        printf("A kartya statusza megvaltozott.\n");
        printf("%d\n",(*card).status);
        return;
    }

}
void setData(CARDS *cards,int i){
    int option=-1;
    while (option!=0){
        printf("Melyik adattagot szeretne megvaltoztatni a kartyaban?\n");
        printf("1.A kartya nevet\n");
        printf("2.A kartya leirasat\n");
        printf("3.A kartya nevet es leirasat \n");
        printf("0.Egyiket sem\n");
        scanf("%d",&option);
        switch (option) {
            case 1:setName(&(*cards),i);break;
            case 2:setDescription(&(*cards),i);break;
            case 3:{
                setName(&(*cards),i);
                setDescription(&(*cards),i);
                break;
            }
            case 0:break;

        }
    }
}

void printAccordToStatus(CARDS cards){
    char status[5];
    printf("Milyen statuszu kartyakat keres?\n");
    scanf("%s",status);
    if(strcmp("TO_DO",status)==0){
        for(int i=0;i<=cards.numofcards;i++){
            if(cards.cardlist[i].status==TO_DO){
                printf("    %s\n",cards.cardlist[i].name);
            }
        }
        return;
    }
    if(strcmp("DONE",status)==0){
        for(int i=0;i<=cards.numofcards;i++){
            if(cards.cardlist[i].status==DONE){
                printf("    %s\n",cards.cardlist[i].name);
            }
        }
        return;
    }
    if(strcmp("DOING",status)==0){
        for(int i=0;i<=cards.numofcards;i++){
            if(cards.cardlist[i].status==DOING){
                printf("    %s\n",cards.cardlist[i].name);
            }
        }
        return;
    }
}
void setName(CARDS *cards,int i){
    printf("Mi legyen a kartya uj neve?\n");
    char temp[20];
    scanf("%s",temp);
    while(findCard(temp,(*cards))!=-1){
        printf("Ez kartya mar letezik kerem irjon be mas nevet\n");
        scanf("%s",temp);
    }
    strcpy((*cards).cardlist[i].name,temp);
}
void setDescription(CARDS *cards,int i){
    printf("Mi legyen a kartya uj leirasa?\n");
    char szemet[20];
    fgets(szemet, sizeof( szemet ), stdin);
    fgets((*cards).cardlist[i].description, sizeof( (*cards).cardlist[i].description ), stdin);


}


