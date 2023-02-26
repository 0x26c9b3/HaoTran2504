#include <stdio.h>
int sntlonnhat(int a[],int n)
{	
		if (ktsnt(a[n-1]==1))
		{
			if (a[n-1]>sntlonnhat(a,n-1))
			return a[n-1];
				return sntlonnhat(a,n-1);
		}
}
int ktsnt(int n)
{
    int d=0;
    for(int i=1; i<=n; i++)
        {
		if(n%i==0)
            d++;
        }
    if(d==2)
        return 1;
    return 0;
}
void Nhapmang(int a[],int n,int i)
{
	if(i>=n)
	return;
	printf("Nhap a[%d]",i);
	scanf("%d",&a[i]);
	Nhap(a,n,i+1);
}
int main()
{ 
	int a[100];
	int n;

}
