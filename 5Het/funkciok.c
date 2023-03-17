#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string s = get_string("Adj meg egy stringet: ");

    char c[100];

    strcpy(c, s);

    c[0] = 'J';

    strcpy(s, c);

    printf("%s\n", s);
}