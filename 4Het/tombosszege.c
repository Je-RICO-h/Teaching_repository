#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Az osszeg: %d\n", sum);
}