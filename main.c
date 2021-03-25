#include <stdio.h>
#include "cards.h"

int main() {
    cards a;
    a=create();
    adduser(&a,3);
    setstatus(&a,2);
    printids(a);
    return 0;
}
