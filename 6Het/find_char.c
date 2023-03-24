#include <stdio.h>
#include <string.h>
#include "prog1.h"

int find_char(string s, char c)
{
    int n = strlen(s);

    for(int i = 0; i < n; i++)
        if(s[i] == c) 
            return i;

    return -1;
}

int contains_char(string s, char c)
{
    if(find_char(s, c) != -1)
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    char c;
    int x;

    s = get_string("Adj meg egy stringet: ");

    printf("Adj meg egy karaktert: ");

    scanf("%c", &c);

    if(contains_char(s, c))
        printf("Benne van!\n");
    else
        printf("Nincs benne!\n");
}