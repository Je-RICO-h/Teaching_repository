#include <stdio.h>
#include <stdlib.h>

#define N 1000

void feltolt(const int n, int tomb[])
{
    for(int i = 0; i < n; i++)
        tomb[i] = (rand() % (512 - 256)) + 256;
}

int check_palindrom(const int n, const int tomb[])
{
    int c = 0;
    int num;
    int ford;

    for(int i = 0; i < n; i++)
    {
        ford = 0;

        num = tomb[i];

        while(num != 0)
        {
            ford = ford * 10 + (num % 10);
            num /= 10;
        }

        if(ford == tomb[i])
            c++;
    }

    return c;
}

int main()
{
    srand(2023);

    int tomb[N];

    feltolt(N, tomb);

    printf("%d\n", check_palindrom(N, tomb));


}