#include <stdio.h>

int my_abs(int x)
{
    if(x < 0)
        return -x;
    else
        return x;
}

int get_int()
{   
    int x;

    printf("Adj meg egy szamot: ");
    scanf("%d", &x);

    return x;
}

// int get_pozitiv_int()
// {
//     int x;

//     do
//     {
//         x = get_int();
//     } while (x < 0);

//     return x;
    
// }

int get_pozitiv_int()
{
    int x;

    while(1)
    {
        x = get_int();

        if(x >= 0)
            break;
    }

    return x;
}



int main()
{
    //printf("%d\n", my_abs(1));

    // int n = get_int();
    // int y = get_int();

    // printf("A megadott szamok: %d, %d", n, y);

    int n = get_pozitiv_int();
    
    printf("A megadott szam: %d\n", n);
}