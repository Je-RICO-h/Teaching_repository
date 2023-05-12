#include <stdio.h>
#include <stdlib.h>

int cmp(const void* bal, const void* jobb)
{
    const int *a = (const int*) bal;
    const int *b = (const int*) jobb;

    return *a - *b;
}

int main()
{
    int szamok[] = {88, 56, 100, 2 ,25};
    int meret = 5;

    qsort(szamok, meret, sizeof(int), cmp);

    for(int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }

    puts("");

}