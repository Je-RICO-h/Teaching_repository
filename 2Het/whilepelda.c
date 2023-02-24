#include <stdio.h>

int main()
{
    int x = 1234;
    int a;
    int ford = 0;

    while(x != 0)
    {
        a = x%10;
        x /= 10; // x = x / 10;
        ford = ford * 10 + a;
    }

    printf("%d\n", ford);

    while(ford != 0)
    {
        a = ford % 10;
        ford /= 10;
        printf("%d,", a);
    }

    return 0;

}