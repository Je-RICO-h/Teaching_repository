#include <stdio.h>

void kiir(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d,", i);
    }

    printf("%d\n", n);
}

int main()
{
    int n = 20;

    kiir(n);
}