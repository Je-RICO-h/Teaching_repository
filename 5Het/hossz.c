#include <stdio.h>
#include <string.h>
#include "prog1.h"

int my_str(string s)
{
    int i = 0;

    while(s[i] != '\0')
        i++;

    return i;

    int c = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        c++;
    }

    return c;

}

// int hossz(string s)
// {
//     return strlen(s);
// }


int main()
{
    printf("%d\n", my_str(""));        
}