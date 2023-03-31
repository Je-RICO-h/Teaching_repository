#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

void merge(string s1, string s2)
{
    if(strlen(s1) != strlen(s2))
    {
        printf("HIBA: a stringek meretenek meg kell egyeznie!\n");
        exit(1);
    }

    int n = strlen(s1);

    for(int i = 0; i < n; i++)
    {
        printf("%c%c", s1[i], s2[i]);
    }

    puts("");
}

int main(int argc, string argv[])
{
    if(argc != 3)
    {
        printf("HIBA: Adj meg pontosan 2 Stringet!\n");

        return 1;
    }

    merge(argv[1], argv[2]);

    return 0;


}