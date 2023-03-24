#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    char c[100];
    string s;

    // printf("Adj meg egy nevet: ");

    // fgets(c, 100, stdin);

    // c[strlen(c) -1] = '\0';

    s = get_string("Adj meg egy nevet a stringbe: ");

    strcpy(c, s);

    c[0] = 'J';

    strcpy(s, c);

    printf("String: Hello %s\n", s);
}