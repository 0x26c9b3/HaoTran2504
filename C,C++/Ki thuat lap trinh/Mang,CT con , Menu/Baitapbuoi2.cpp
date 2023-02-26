#include <stdio.h>
#include <conio.h>

void Nhapcontro (int *a,int n)
{
	for (int i= 0;i < n;i++)
	{
		printf("Nhap a[%d]",i);
		scanf("%d",(a+i));
	}
}
void Xuatmang(int *a,int n)
{
	for(int i = 0; i <n ;i++)
	{
		printf("%d",*(a+i));
	}
}
int Ptulonnhat (int *a,int n)
{
	int max = *(a+0);
	for (int i=0;i<n;i++)
	{
		if (max < *(a+i))
		max = *(a+i);
	}return max;
}
int Ptunhonhat(int *a,int n)
{
	int min = *(a+0);
	for(int i=0;i<n;i++)
	{
		if(*(a+i) < min)
		min = *(a+i);
	}return min;
}
int DemUocSo(int n)
	{
	int dem = 0; 
		for(int i =1; i<=n ; i++ )
		{
		if(n%i==0)
		dem++;
		}
	return dem;  
	} 
int KiemTraSNT(int n)
{
	if (DemUocSo(n)==2)
	return 1;//la so nguyen to 
	else 
	return 0;//ko la so nguyen to
}
int SNTlonnhat(int *a,int n)
{
	int max = 0;
	for(int i=0;i<n;i++)
	{
		if(KiemTraSNT(*(a+i))==1&&*(a+i)>max)
		max = *(a+i);
	}return max;
}
int SoCPdautien(int *a,int n)
{
	int f = 0;
	for(int i= 0; i <n ;i++)
	{
		if(DemUocSo(*(a+i)) %2 == 1&& *(a+i)!= 1)
		f = *(a+i);
	}return f;
}
int SoCPnhonhat(int *a,int n)
{
	int min = SoCPdautien(a,n);
	for (int i=0;i<n;i++)
	{
		if(DemUocSo(*(a+i))%2==1 && *(a+i) < min)
		min = *(a+i);
	}return min;
}
int main()
{	
	int n;
	int *a;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	a = new int (n);
	Nhapcontro(a,n);
	Xuatmang(a,n);
	printf("\nPtu lon nhat trong mang : %d",Ptulonnhat(a,n));
	printf("\nPtu nho nhat trong mang : %d",Ptunhonhat(a,n));
	printf("\nSNT lon nhat : %d",SNTlonnhat(a,n));
	printf("\nSo CP nho nhat : %d",SoCPnhonhat(a,n));
	return 0;
}
