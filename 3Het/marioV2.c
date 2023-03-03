#include <stdio.h>

int main()
{
    int hashes, n, spaces;

    n = 3;

    for(int i = 1; i <= n; i++)
    {
        hashes = i;
        spaces = n - i;

        for(int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < hashes; j++)
        {
            printf("#");
        }
        puts("");
    }
}