#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "prog1.h"

int char_count(string s, char c)
{
    int n = strlen(s);
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == c)
            count++;
    }

    return count;
}

int main()
{
    string s = get_string("Adj meg egy stringet: ");

    char c;

    printf("Adj meg egy karaktert: ");

    scanf("%c", &c);

    printf("A %c karakter %d szer fordul elo\n", char_count(s, c));
    
}