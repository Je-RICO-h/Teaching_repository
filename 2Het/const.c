#include <stdio.h>

int main()
{
    // const int X = 5;

    // const float PI = 3.1415;

    // X = 3;

    // printf("%d\n", x);

    const int N = 1000;

    int x = 0;

    for(int i = 0; i < N; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            x += i;
        }
    }

    printf("Az eredmeny: %d\n", x);
}