#include <stdio.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if(argc < 2)
    {
        printf("Hiba: Adj meg argumentumokat!\n");
        return 1;
    }

    printf("A megadott argumentumok szama: %d\n", argc - 1);

    printf("A megadott argumentumok: ");

    for(int i = 1; i < argc; i++)
    {
        printf("%s, ", argv[i]);
    }

    puts("");
}