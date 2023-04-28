#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int x[1000000];

    int* x = (int*) malloc(10 * sizeof(int));

    char* c = (char*) malloc(40 * sizeof(char));

    c[0] = 'a';
    c[1] = 'b';
    c[2] = 'c';
    c[3] = '\0';

    //int* x = (int*) calloc(1000, sizeof(int));

    // for(int i = 0; i < 10; i++)
    //     x[i] = i;

    // x = (int*) realloc(x, sizeof(int) * 11);

    // x[10] = 10;

    // for(int i = 0; i < 11; i++)
    //     printf("%d ", x[i]);

    // puts("");

    printf("%s\n", c);

    free(c);

    // //free(x);
}