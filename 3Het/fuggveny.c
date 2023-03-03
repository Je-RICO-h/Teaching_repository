#include <stdio.h>

int duplaz(int n)
{
    return n*2;
}

int main()
{
    int x, y ,z;

    x = duplaz(6);
    y = duplaz(12);
    z = duplaz(24);


    printf("%d, %d, %d\n", x,y,z);
}