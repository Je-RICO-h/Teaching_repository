#include <stdio.h>
#define SIZE 27

int main()
{
    char c[SIZE];

    for(int i = 'a'; i <= 'z'; i++)
    {
        c[i - 97] = (char)i;
    }

    c[26] = '\0';

    for(int i = 0; i < SIZE; i++)
    {
        printf("%c", c[i]);
    }

    puts("");
}