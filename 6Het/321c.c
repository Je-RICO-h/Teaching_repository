#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if(argc != 3)
    {
        printf("HIBA: Pontosan 3 argumentum adj meg!\n");
        exit(1);
    }

    printf("A ket szam osszege: %d\n", atoi(argv[1]) + atoi(argv[2]));
}