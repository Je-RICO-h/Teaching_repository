#include <stdio.h>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "Hiba: Adj meg pontosan 1 filenevet!");
        return 1;
    }

    FILE* f = fopen(argv[1], "w");

    if(f == NULL)
    {
        fprintf(stderr, "Hiba: A file nem letezik!");
        return 2;
    }

    char c[255];
    int count = 0;

    while(fgets(c, 255, f) != NULL)
        count++;

    fclose(f);

    printf("A file %d sort tartalmaz\n", count);
}