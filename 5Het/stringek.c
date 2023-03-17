#include <stdio.h>
#include <string.h>

int main()
{
    char c[10];
    char c2[10];

    printf("Adj meg egy stringet: ");
    // scanf("%s", &c);
    // printf("Add meg a masodik karaktert: ");
    // scanf("%s", &c2);

    fgets(c, 10, stdin);

    //printf("Add meg a neved: ");

    //scanf("%s", &c);

    puts(c);
    //puts(c2);
}