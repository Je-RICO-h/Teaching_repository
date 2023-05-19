#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[255];
    int count = 0;

    while(1)
    {
        printf("Sztring (Vege: 0): ");
        fgets(s,255,stdin);

        int n = strlen(s);

        s[n] = '\0';

        if(strlen(s) == 2 && s[0] == '0')
            break;

        if(!isupper(s[0]))
            s[0] = s[0] - 32;

        for(int i = n - 2; i >= 0; i--)
            printf("%c", s[i]);

        puts("");

        count++;
    }

    printf("\n\nA megadott bementek szama: %d\n", count);
}