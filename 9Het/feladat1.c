#include <stdio.h>
#include <string.h>

void sort_string(char* s)
{
    int abc[255];
    int aux;

    int n = strlen(s);

    for(int i = 0; i < n; i++)
        abc[i] = (int) s[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(abc[j] > abc[j+1])
            {
                aux = abc[j];
                abc[j] = abc[j+1];
                abc[j+1] = aux;
            }

    for(int i = 0; i < n - 1; i++)
        printf("%c,", (char) abc[i]);
    
    printf("%c\n", abc[n-1]);
}

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("Hiba! Adj meg pontosan egy sztringet!\n");
        return 1;
    }

    sort_string(argv[1]);
}