#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int strcmpi(const char* s1, const char* s2)
{
    int s1len = strlen(s1);
    int s2len = strlen(s2);

    int i = 0;

    while(i != s1len || i != s2len)
    {
        if(s1[i] == s2[i] || s1[i] - 32 == s2[i] || s1[i] == s2[i] - 32 || s1[i] - 32 == s2[i] - 32)
            i++;
        else
            if((int)s1[i] > (int)s2[i])
                return 1;
            else
                return -1;
    }

    if(s1len != s2len)
        if(s1len > s2len)
            return 1;
        else
            return -1;

    return 0;
}

void feloszt(FILE *name, int *n, char matrix[100][100])
{
    char sor[100];
    char *nev;
    int kor;
    char *szak;
    int i = 0;

    while(fgets(sor, 100 , name) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';
        char *p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;
        if(strcmpi(szak, "PTI") == 0)
        {
            strcpy(matrix[i], nev);
            i++;
        }
    }
    *n = i;
}

void sort(const int n, char matrix[100][100])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(matrix[j], matrix[j + 1]) > 0)
            {
                char temp[100];
                strcpy(temp, matrix[j]);
                strcpy(matrix[j], matrix[j+1]);
                strcpy(matrix[j + 1], temp);
            }
        }
    }
}

void nagykezdobetu(const int n, char matrix[100][100])
{
    for(int i = 0; i < n; ++i)
    {
        char word[100];
        strcpy(word, matrix[i]);
        if(islower(word[0]))
            word[0] -= 32;
        strcpy(matrix[i], word);
    }
}

void tombkiir(const int n, const char matrix[100][100])
{
    for(int i = 0; i < n - 1; i++)
        printf("%s, ", matrix[i]);
    
    printf("%s\n", matrix[n - 1]);
}

int main()
{
    FILE *fp = fopen("nevek.csv", "r");

    char nevek[100][100];

    int meret = 0;

    feloszt(fp, &meret, nevek);
    sort(meret, nevek);
    nagykezdobetu(meret, nevek);
    tombkiir(meret, nevek);

    return 0;
}