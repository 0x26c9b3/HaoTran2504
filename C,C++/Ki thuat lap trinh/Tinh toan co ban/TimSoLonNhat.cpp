#include<stdio.h>
int main () 
{
	int a,b,c,n,max, min,mid;
	printf("Nhap vao so nguyen n gom 3 chu so: ");
	scanf("%d",&n);
	a = n/100;//tram
	b = n/10%10;//chuc
	c = n%10;//donvi
	
	max=a;
	if (b>max)
		max=b;
	if (c>max)
		max=c;
	min=a;
	if (b<min)
		min=b;
	if (c<min)
		min=c;
	mid=(a+b+c)-max-min;
	//vidu: a = 3 b = 6 c = 9 => b = (3+6+9)-9-3
	n = max*100+mid*10+min;
	printf("So lon nhat n = %d",n);
	return 0;
}

