#include <stdio.h>
#include <limits.h>
#include <string.h>


int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        printf("Hiba nem adtal meg bemenetet!");
        return 1;
    }

    //int c = INT_MAX;

    int c = strlen(argv[1]);

    for(/*int i = 1*/ int i = 2; i < argc; i++)
    {
        if(strlen(argv[i]) < c)
            c = strlen(argv[i]);
    }

    for(int i = 1; i < argc; i++)
    {
        if(strlen(argv[i]) == c)
        {
            printf("%s ", argv[i]);
        }
    }

    puts("");

    return 0;
}