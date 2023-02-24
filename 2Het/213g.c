#include <stdio.h>

int main()
{
    int x = 0;

    for(int i=1; i <= 100; i++)
    {
        x += i;
    }

    printf("Az eredmeny: %d\n", x);

    return 0;
}