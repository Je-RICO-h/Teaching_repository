#include <stdio.h>

int main()
{
    int a, b;
    char m;
    
    printf("A= ");
    
    scanf("%d",&a);
    
    getchar();
    
    printf("Muvelet: ");
    
    scanf("%c", &m);
    
    printf("B= ");
    
    scanf("%d",&b);
    
    if(m == '+')
    {
        printf("%d", a+b);
    }
    else if(m == '-')
    {
        printf("%d", a-b);
    }
    else if(m == '*')
    {
        printf("%d", a*b);
    }
    else if(m == '%')
    {
        printf("%d", a%b);
    }
    else if(m == '/')
    {
        printf("%d", a/b);
    }
    else
    {
        printf("A muvelet nem ertelmezheto\n");
    }
}
