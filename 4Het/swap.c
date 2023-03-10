#include <stdio.h>

void swap(int a[], const int n)
{
    int aux;

    for(int i = 0; i <= n/2; i++)
    {
        aux = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = aux;
    }
}

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;

    swap(a, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }

    puts("");
}