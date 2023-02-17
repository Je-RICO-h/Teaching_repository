#include <stdio.h>

int main()
{
    int x;
    
    printf("Adj meg egy szamot: ");
    
    scanf("%d", &x);
    
    if(x % 2 == 0)
    {
        printf("Paros szam\n");
    }
    else
    {
        printf("Paratlan szam\n");
    }
}
