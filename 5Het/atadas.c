#include <stdio.h>

void kiir(char x[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%c", x[i]);
    }

    puts("");
}

int main()
{
    char c[] = "Hello\0";

    kiir(c);
}