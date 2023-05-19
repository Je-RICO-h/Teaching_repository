#include <stdio.h>

int check_perfect()
{
    int c = 0;
    int sum;

    for(int i = 0; i < 100000; i++)
    {
        sum = 0;

        for(int d = 1; d <= i/2; d++)
            if(i%d == 0)
                sum += d;

        if(sum == i)
            c += i;
    }

    return c;
}

int main()
{
    printf("%d\n", check_perfect());

    return 0;
}