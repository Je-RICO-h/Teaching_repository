#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string s;

    s = get_string("Adj meg egy stringet: ");

    // puts(s);

    // int x = strlen(s);

    // printf("%d\n", x);

    int x = strlen(s);

    for(int i = 0; i < x; i++)
    {
        printf("%c", s[i]);
    }

    puts("");
}