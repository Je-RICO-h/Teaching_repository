#include <stdio.h>

int main()
{
    // for(int i = 0; i < 10; i++)
    // {
    //     if(i == 5)
    //     {
    //         break;
    //     }

    //     printf("%d\n", i);
    // }

    int i = 0;

    while(i < 10)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d\n", i);

        i++;
    }
}