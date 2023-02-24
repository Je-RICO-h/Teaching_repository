#include <stdio.h>

int main()
{
    int x = 1;

    while(x < 10)
    {
        printf("%d\n", x);

        x++;
    }

    while(x > 1)
    {
        printf("%d\n", x);

        x--;
    }

    for(int i=1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    for(int i=10; i >= 0; i--)
    {
        printf("%d\n", i);
    }
}