#include <stdio.h>

int main()
{
	int x,y;
	int c,d;
	
	printf("Add meg a teglalap alapjat: ");
	
	scanf("%d", &x);
	
	printf("Add meg a teglalap magassagat: ");
	
	scanf("%d", &y);
	
	c = x*y;
	d = x+y;
	
	printf("A teglalap terulete: %d\n", c);
	printf("A teglalap osszege: %d\n", d);
	
}
