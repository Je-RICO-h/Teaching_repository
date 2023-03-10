#include <stdio.h>

int main()
{
    int a[100];
    int ossz = 0;

    for(int i = 0; i < 100; i++)
    {
        a[i] = i+1;
    }

    for(int i = 0; i < 100; i++)
    {
        ossz += a[i];
    }

    printf("Ossz: %d\n", ossz);
}