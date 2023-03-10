#include <stdio.h>

int palindrom(int v[], int n)
{
    for(int i = 0 ; i <= n/2; i++)
    {
        if(v[i] != v[n-1-i])
            return 0;
    }

    return 1;
}

int main()
{
    int a[5] = {4,8,5,3,4};
    int n = 5;

    if(palindrom(a, n))
    {
        printf("Palindrom a tomb\n");
    }
    else
    {
        printf("Nem palindrom a tomb\n");
    }
}