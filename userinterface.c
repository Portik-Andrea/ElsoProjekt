//
// Created by porti on 2021. 04. 19..
//

#include "userinterface.h"
void start(){
    int option=-1;
    TABLES tables;
    createTables(&tables);

    while (option!=0){
        printf("Mit szeretne csinalni?\n");
        printf("1.Felhasznalo letrehozasa.\n");
        printf("2.Tablak letrehozasa.\n");
        printf("3.Tablak torlese.\n");
        printf("4.Tablak kiirasa.\n");
        printf("5.Tablak kezelese.\n");
        printf("0.Kilepes.\n");
        scanf("%d",&option);
        switch (option) {
            case 1:addUserToUsers(&tables);break;
            case 2:addTable(&tables);break;
            case 3:deleteTable(&tables);break;
            case 4:printTable(tables);break;
            case 5:tableMeneger(&tables);break;

        }
    }
}


void tableMeneger(TABLES* tables){
    int option=-1;
    while (option!=0){
        printf("Mit szeretne csinalni?\n");
        printf("1.Felhasznalo hozzaadasa egy tablahoz.\n");
        printf("2.Kartya kezelese.\n");
        printf("0.Kilepes.\n");
        scanf("%d",&option);
        switch (option) {
            case 1:{
                char id[20];
                printf("Melyik azonositot adjuk hozza?\n");
                scanf("%s",id);
                //int i=f
                addUserToTable(tables,id);
                break;
            }
            case 2:{
                char tablename[20];
                printf("Melyik tablan szeretne kartya muveleteket vegrehajtani?\n");
                scanf("%s",tablename);
                int i=findTable(tablename,(*tables));
                if (i==-1){
                    printf("Ez a tabla nem letezik");
                    break;
                }
                cardMeneger(&(*tables).tablelist[i]);
                break;
            }
            case 0:break;
        }
    }
}

void cardMeneger(TABLA* table){
    int option=-1;
    while (option!=0){
        printf("Mit szeretne csinalni?\n");
        printf("1.Kartya letrehozasa\n");
        printf("2.Felhasznalo hozzarendelese egy kartyahoz\n");
        printf("3.Kartyan kik dolgoztak eddig\n");
        printf("4.Kartya statusza\n");
        printf("5.Kartya statuszanak a megvaltoztatasa\n");
        printf("6.Kartya adatainak a megvaltoztatasa\n");
        printf("7.Kartya torlese\n");
        printf("8.Adott statuszu kartyak\n");
        printf("0.Kilepes\n");
        scanf("%d",&option);
        switch (option) {
            case 1:addCardToTable(&(*table));break;
            case 2:{
                char id[20];
                printf("Adja meg az uj felhasznalo azonositojat aki a kartyan dolgozni fog.\n");
                scanf("%s",id);
                if(findIdInTable((*table),id)==-1){
                    printf("Ez a felhasznalo nincs a tablahoz rendelva.");
                    return;
                }
                addNewUser(&(*table).cards,id);
                break;
            }
            case 3: {
                char cardName[20];
                printf("Adja meg a kartya nevet\n");
                scanf("%s",cardName);
                int i=findCard(cardName,(*table).cards);
                if(i==-1){
                    printf("Ez a felhasznalo nincs a tablahoz rendelva.");
                    return;
                }
                printOldids((*table).cards.cardlist[i]);
                break;
            }
            case 4: {
                char cardName[20];
                printf("Adja meg a kartya nevet\n");
                scanf("%s",cardName);
                int i=findCard(cardName,(*table).cards);
                if(i==-1){
                    printf("Ez a kartya nem letezik");
                    return;
                }
                getStatus((*table).cards.cardlist[i]);
                break;
            }
            case 5: {
                char cardName[20];
                printf("Adja meg a kartya nevet\n");
                scanf("%s",cardName);
                int i=findCard(cardName,(*table).cards);
                if(i==-1){
                    printf("Ez a kartya nem letezik");
                    return;
                }
                setStatus(&(*table).cards.cardlist[i]);
                break;
            }
            case 6:{
                char cardName[20];
                printf("Adja meg a kartya nevet\n");
                scanf("%s",cardName);
                int i=findCard(cardName,(*table).cards);
                if(i==-1){
                    printf("Ez a kartya nem letezik");
                    return;
                }
                setData(&(*table).cards,i);
                break;
            }
            case 7:{
                char cardName[20];
                printf("Adja meg a kartya nevet\n");
                scanf("%s",cardName);
                int i=findCard(cardName,(*table).cards);
                if(i==-1){
                    printf("Ez a kartya nem letezik");
                    return;
                }
                deleteCard(&(*table).cards,i);
                break;
            }
            case 8:{
                printAccordToStatus((*table).cards);
                break;
            }
            case 0:break;



        }
    }
}