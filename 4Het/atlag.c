#include <stdio.h>

int atlag(const int a[], const int n)
{
    int osszeg = 0;
    
    for(int i = 0; i < n; i++)
    {
        osszeg += a[i];
    }

    return osszeg/n;
}

int main()
{
    int v[10], n;
    n = 10;

    for(int i = 0; i < n; i++)
    {
        v[i] = i+1;
    }

    printf("A tomb atlaga: %d\n", atlag(v, n));
}