#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "prog1.h"

int main()
{
    // string s = get_string("String: ");

    // if(isalpha(s[0]))
    // {
    //     printf("Az elso karakter egy betu\n");
    // }
    // else if(isblank(s[0]))
    // {
    //     printf("Az elso karakter egy szokoz\n");
    // }
    // else if(isdigit(s[0]))
    // {
    //     printf("Az elso karakter egy szam\n");
    // }
    // else
    // {
    //     printf("Nem lehet tudni mi az elso karakter\n");
    // }

    string s = get_string("String: ");

    int n = strlen(s);

    for(int i = 0; i < n; i++)
    {
        printf("%c", tolower(s[i]));
    }

    printf("\n");
}