#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "Alma,_.._.,Banan.,,,,_.Korte_Kiwi";
    char *p;
    p = strtok(s, ",._");

    while(p != NULL)
    {
        puts(p);
        p = strtok(NULL, ",._");
    }

    return 0;
}