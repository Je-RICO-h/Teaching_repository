#include <stdio.h>

int main()
{
    int x;

    do
    {
        printf("Adj meg egy pozitiv szamot: ");
        scanf("%d", &x);

        if(x < 0)
        {
            printf("Helytelen input!\n");
        }
        
    } while (x < 0);
    
}