#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	
	
	int a, b;
	char c[10];

	scanf("%d%d", &a, &b);
	fflush(stdin);
		gets(c);
	printf("%d %s %d = %d",a,c,b,a+b);
	return 0;
}
 

