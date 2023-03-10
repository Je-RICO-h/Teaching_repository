#include <stdio.h>

void adder(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = a[i] + 1;
    }
}

int main()
{
    int a[5];
    int n = 5;

    a[0] = 0;
    a[1] = 67;
    a[2] = 89;
    a[3] = 1;
    a[4] = 60;

    //printf("Noveles elott:");

    for(int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }

    puts("");

    // adder(a, n);

    // printf("Noveles utan:");

    // for(int i = 0; i < n; i++)
    // {
    //     printf("%d,", a[i]);
    // }

    // puts("");



    // printf("Atvaltas elott: %d\n", a[0]);

    // a[0] = 105;

    // printf("Atvaltas utan: %d\n", a[0]);

    // for(int i = 0; i < n; i++)
    // {
    //     printf("%d,", a[i]);
    // }

    // puts("");
}