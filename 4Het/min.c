#include <stdio.h>

int main()
{
    int a[5] = {3,62,1,3,5};
    int min = a[0];

    for(int i = 1; i < 5; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("A min elem: %d\n", min);

}