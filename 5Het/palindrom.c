#include <stdio.h>
#include <string.h>
#include "prog1.h"

int palindrom(string s)
{
    int n = strlen(s);

    for(int i = 0; i < n; i++)
        if(s[i] != s[n-1-i])
            return 0;

    return 1;
}

int main()
{
    int x = palindrom("paradicsom");

    if(x)
        printf("Palindrom\n");
    else
        printf("Nem palindrom\n");
}