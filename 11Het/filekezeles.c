#include <stdio.h>

int main()
{
    FILE* f = fopen("file.txt", "w");

    fprintf(f, "%d\n", 1);
    fprintf(f, "%d\n", 2);
    fprintf(f, "%d\n", 3);

    fclose(f);

    f = fopen("file.txt", "r");

    if(f == NULL)
    {
        fprintf(stderr, "Hiba: A file nem letezik");
        return 1;
    }

    char c[100];

    while(fgets(c, 100, f) != NULL)
    {
        printf("%s", c);
    }

    fclose(f);


}