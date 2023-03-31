#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    string s;

    while(1)
    {
        s = get_string("Adj meg egy stringet (Vegjel: *): ");

        if(strcmp(s,"*") == 0)
            break;
    }

    puts("");
}