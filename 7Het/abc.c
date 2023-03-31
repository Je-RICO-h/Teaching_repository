#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string s;

    char c[100];

    for(int i = 97; i < 123; i++)
    {
        c[i-97] = (char) i;
    }

    c[123-97] = '\0';

    strncpy(s,c,100);

    printf("%s\n", s);


}