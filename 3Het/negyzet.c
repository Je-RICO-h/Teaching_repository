#include <stdio.h>
#include <math.h>

void kiir(int x)
{
    printf("A megadott szam: %d\n", x);
}

int negyzet(int x)
{
    return x * x;
}

int main()
{
    int n = 5;

    kiir(negyzet(n));
}