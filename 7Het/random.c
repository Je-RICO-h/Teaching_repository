#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    //int intervallum = 10 - 5 +1

    //rand() % intervallum;

    //zart intervallum

    int felso = 9;
    int also = 6;

    printf("%d\n", 5 + (rand() %(felso - also + 1 )));
}