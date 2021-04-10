#include <stdio.h>
#include "cards.h"
#include "users.h"
#include "tables.h"

int main() {
    cards a;
    a=create();
    addUser(&a, 3);
    setStatus(&a, 2);
    printIds(a);

    //valamiert ha nem csokkeno sorrendbe adom az ID-t nem jo a kiiras
    //majd ra neznetek
    USERS users;
    createUsers(&users);
    for(int i=0;i<3;++i){
        char name[30];
        printf("Felhasznalo neve:");
        scanf("%s",name);
        int ID;
        printf("Azonositoszam:");
        scanf("%i",&ID);
        insertUser(&users,ID,name);
    }
    if(emplyUsers(users)){
        printf("Nincs meg felfasznalo!\n");
    }
    else{
        printf("Felfasznalo(k) letrejottek.\n");
    }
    printUsers(users);
    Table *tablacska = createTable("Tabla");
    addUserToTable(1, tablacska);
    addCardToTable(1, tablacska);
    printTable(tablacska);
    return 0;
}
