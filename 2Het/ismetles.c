#include <stdio.h>

int main()
{
    int x;

    printf("Adj meg egy szamot: ");
    scanf("%d", &x);

    if(x > 0)
    {
        printf("Pozitiv\n");
    }
    else if(x == 0)
    {
        printf("Nulla\n");
    }
    else
    {
        printf("Negativ");
    }
}