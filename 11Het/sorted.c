#include <stdio.h>
#include <stdlib.h>

int* sorted(int* tomb, int n)
{
    int* tomb2 = (int*) malloc(n*sizeof(int));

    for(int i = 0; i < n; i++)
    {
        tomb2[i] = tomb[i];
    }

    int aux;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - i - 1; j++)
        {
            if(tomb2[j] > tomb2[j+1])
            {
                aux = tomb2[j];
                tomb2[j] = tomb2[j+1];
                tomb2[j+1] = aux;
            }
        }

    return tomb2;
}

int main()
{
    int* tomb = (int*) malloc(10 * sizeof(int));

    tomb[0] = 5;
    tomb[1] = 23;
    tomb[2] = 167;
    tomb[3] = 24;
    tomb[4] = 2;
    tomb[5] = 60;
    tomb[6] = 53;
    tomb[7] = 80;
    tomb[8] = 90;
    tomb[9] = 1;

    for(int i = 0; i < 10; i++)
        printf("%d ", tomb[i]);

    puts("");

    int* tomb_masolat;

    tomb_masolat = sorted(tomb, 10);

    for(int i = 0; i < 10; i++)
        printf("%d ", tomb_masolat[i]);

    puts("");

    //free(tomb);
    free(tomb_masolat);
}