#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int intelligence, stamina, charisma;
    srand(time(0));
    intelligence = (rand() % 20) + 1;
    stamina = (rand() % (20 - intelligence)) + 1;
    charisma = 20 - intelligence - stamina;
    
     char *cls;
    if (intelligence >= stamina && intelligence >= charisma) {
        cls = "mage";
    }
    else if (stamina >= intelligence && stamina >= charisma) {
        cls = "knight";
    } 
    else {
        cls = "thief";
    }

    printf("Class: %s\n", cls);
    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);

    return 0;
}