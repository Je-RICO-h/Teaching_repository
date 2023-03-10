#include <stdio.h>

int main()
{
    int v[10] = {0,1,2,3,4,5,6,7,8,9};
    int n;
    n = 10;

    for(int i = n-1; i >= 0; i--)
    {
        printf("%d, ", v[i]);
    }
}