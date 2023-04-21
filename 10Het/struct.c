#include <stdio.h>

typedef struct{
    int x;
    int y;
} Pont;

Pont origo()
{
    //Pont p = {0, 0};

    Pont p;
    p.x = 0;
    p.y = 0;

    return p;
}

void kiir(Pont p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

int main()
{
    Pont pontok = origo();

    Pont b = pontok;
    b.x = 100;

    kiir(pontok);
    kiir(b);
    kiir(pontok);
}