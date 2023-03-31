#include <stdio.h>

int main()
{
    int n = 28;
    int sum = 0;

    for(int d = 1; d <= n/2; d++)
    {
        if(n % d == 0)
            sum += d;
    }

    if(n == sum)
        printf("Tokeletes szam\n");
    else
        printf("Nem tokeletes!\n");

    // 6 = 1 + 2 + 3
    // 28 = 1 + 2 + 4 + 7 + 14
    // 8 = 1 + 2 + 4
}