#include <stdio.h>
#define N 10

int main()
{
    int tomb[N] = {3, 5, 8, 10, 23, 1, 2, 7, 9, 4};
    int aux;

    printf("Rendezetlen tomb: ");

    for(int i = 0; i < N; i++)
        printf("%d ", tomb[i]);

    puts("");

    //buborek rendezes

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N - i - 1; j++)
        {
            if(tomb[j] > tomb[j+1])
            {
                aux = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = aux;
            }
        }

    printf("Rendezett tomb: ");

    for(int i = 0; i < N; i++)
        printf("%d ", tomb[i]);

    puts("");
}