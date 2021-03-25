#include <stdio.h>
#include "cards.h"
#include "users.h"

int main() {
    cards a;
    a=create();
    adduser(&a,3);
    setstatus(&a,2);
    printids(a);

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
    return 0;
}
