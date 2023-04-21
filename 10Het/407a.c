#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct x {
    int avg;
    int max;
    int min;
} parameterek;

void feltolt(int tomb[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tomb[i] = 10 + (rand() % (99 - 10 + 1));    
    }
}

void kiir(int tomb[], int n)
{
    printf("Tomb elemei: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }

    puts("");
}

parameterek infok(int tomb[], int n)
{
    int max = tomb[0];
    int min = tomb[0];
    int avg = tomb[0];
    parameterek p;

    for(int i = 1; i < n; i++)
    {
        if(tomb[i] > max)
            max = tomb[i];
        else if(tomb[i] < min)
            min = tomb[i];

        avg += tomb[i];
    }

    p.avg = avg/n;
    p.max = max;
    p.min = min;


    return p;
}

int main()
{
    srand(time(NULL));

    int v[10];

    feltolt(v, 10);
    kiir(v, 10);
    parameterek p = infok(v, 10);

    printf("Max szam: %d\n", p.max);
    printf("Min szam: %d\n", p.min);
    printf("Atlag: %d\n", p.avg);
}