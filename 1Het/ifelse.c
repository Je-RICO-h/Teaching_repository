#include <stdio.h>

int main()
{
    int x;
    
    printf("Adj meg egy szamot: ");
    scanf("%d", &x);
    
    if(x < 18)
    {
        printf("A megadott szam kisebb mint 18");
    }
    else
    {
        printf("A megadott szam nagyobb mint 18");
    }
}
