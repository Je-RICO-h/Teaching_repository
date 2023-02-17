#include <stdio.h>

int main()
{
    int a, b;
    
    printf("A= ");
    
    scanf("%d",&a);
    
    printf("B= ");
    
    scanf("%d",&b);
    
    if(a > b)
    {
        printf(">");
    }
    else if(a == b)
    {
        printf("=");
    }
    else
    {
        printf("<");
    }   
}