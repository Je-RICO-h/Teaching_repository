#include <stdio.h>

typedef struct Pont {
    int a;
    int b;
} Pont;

typedef int szam;

// void a_b(int tomb[])
// {
//     tomb[0] = 3;
//     tomb[1] = 5;    
// }

// Pont a_b()
// {
//     Pont x;

//     szam n;

//     x.a = 5;
//     x.b = 10;

//     return x;
// }

void a_b(int* p1, int* p2)
{
    *p1 = 10;
    *p2 = 30;
}

int main()
{
    // int tomb[2];

    // a_b(tomb);

    // printf("A: %d, B: %d\n", tomb[0], tomb[1]);

    // Pont n  = a_b();

    // printf("A: %d, B: %d\n", n.a, n.b);

    int a = 0;
    int b = 0;

    // printf("A: %d, B: %d\n", a, b);

    a_b(&a, &b);

    printf("Ket pont kozti tavolsag: %d\n", b - a);

    //printf("A: %d, B: %d\n", a, b);

    // printf("%x\n", &a);
    // printf("%x\n", &b);

    // printf("A erteke: %d\n", a);

    // int* p = &a;

    // *p = 5;

    // printf("A erteke: %d\n", a);
}