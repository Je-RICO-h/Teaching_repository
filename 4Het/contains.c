#include <stdio.h>

int contains(const int a[], const int n, const int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int a[5] = {1,5,7,4,0};
    int n = 5;
    int x = 4;

    int poz  = contains(a, n, x);

    if(poz != -1)
    {
        printf("Az %d elem a %d pozicion van\n",x,poz);
    }
    else
    {
        printf("Nem talalhato meg benne!\n");
    }
}