#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Hello world\n");
    }
    else
        if(strcmp(argv[1], "Batman") == 0 || strcmp(argv[1], "Robin") == 0)
            printf("Deneverveszely!\n");
        else
            printf("Hello %s\n", argv[1]);
}