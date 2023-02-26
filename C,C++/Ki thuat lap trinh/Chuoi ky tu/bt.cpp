#include <stdio.h>
#include <conio.h>
int max(int a[100],int n)
{	int t;
	int m = 0;
	int vt =-1;
	for (int i =0;i <n;i++)
	{
		t+=a[i]*a[i+1];
		if (t>m)
		m = t;
		vt =i;
	}
	return vt;
}
int main()
{
	int n;
	int a[100];
	FILE *f1,*f2;
	f1= fopen("max.inp","r");
	f2 = fopen("max.out","w");
	fscanf(f1,"%d",&n);
	for (int i = 1 ; i <=n;i++)
	{
			fscanf(f1,"%d",&a[i]);
	}	
			if(max(a,n)!=-1)
			{
			fprintf(f2,"%2d,%d\n",max(a,n),max(a,n)+1);
			fprintf(f2,"%4d x %d",a[max(a,n)],a[max(a,n)+1]);
			}
			fclose (f1);
			fclose (f2);
	return 0;
		
}
