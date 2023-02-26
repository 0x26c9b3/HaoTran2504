#include <stdio.h> 
#define MAX 100
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
void KiemTra(int &n);
int TimVTMax(int a[],int n);
int TimVTDuongMin(int a[],int n);
int TimVTAmMax (int a[],int n);
int TimVTAm(int a[],int n);
int TimVTDuong(int a[],int n);

int TimVTDuong ( int a[],int n)
{
	for ( int i = 0 ;i < n;i++)
		if (a[i] > 0)
		return i;
		return -1;//GIAI THICH: Neu a[i] > 0 thi` tra ve i con` lai tra ve -1, o day ko dung else boi vi se can` tra ve 2 gia tri i va -1
					//Neu dung else se chi tra ve 1 trong 2 gia tri a[i] hoac la - 1 thoi!
}
int TimVTAm ( int a[],int n)//-1 -2 -3 4 5 6
{
	for ( int i = 0 ;i < n;i++)
		if (a[i] < 0)
		return i;
		return -1;
}
int TimVTAmMax (int a[],int n)
{
	int vt = TimVTAm(a,n);
	if (vt == -1)
	{
	return -1;
	}
	else
		{
		for ( int i = 0;i<n;i++)
			{
			if ( a[i]<0 &&a[i]>=a[vt])
				vt = i;
			}return vt;
		}
}
int TimVTDuongMin(int a[],int n)
{
	int vt = TimVTDuong(a,n);
	
	if (vt == -1)
	{
	return -1;
	}
	else
	{
		for ( int i = 0;i<n;i++)
		{
		if ( a[i]>0 &&a[i]<=a[vt])
			vt = i;
		}return vt;
	}
}
int TimVTMax(int a[],int n)
{
	int VTmax = 0;
	for ( int i  = 0; i < n ; i ++ )
	{
		if ( a[i]> a[VTmax])
		VTmax = i;
	}
	return VTmax;
}
void KiemTra(int &n)
{	
	do{
		printf("\nSo luong phan tu cua mang = ");
		scanf("%d",&n);
		if ((n<0)||(n>MAX))
		printf("\nVui long nhap lai");
		}while ((n<0)||(n>MAX));
}
void NhapMang(int a [],int n)
{
	for ( int i = 0 ; i <n ; i++)
	{
		printf("\nNhap vao phan tu tai vi tri A[%d]:\t ",i);	
		scanf("%d",&a[i]);
	}
}
void XuatMang ( int a [],int n)
{
	printf("\nCac gia tri trong mang a: ");
	for ( int i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]); 
	}
} 	
int main ()
{
	int a [MAX];
	int n;
	printf("Moi nhap so nguyen tu [1...%d]\n",MAX);
	KiemTra(n);
	NhapMang(a,n); 
	XuatMang(a,n);
	printf("\nPhan tu lon nhat nam o vi tri A[%d],co gia tri = %d",TimVTMax(a,n),a[TimVTMax(a,n)]);
	printf("\nPhan tu duong nho nhat nam o vi tri A[%d],co gia tri = %d",TimVTDuongMin(a,n),a[TimVTDuongMin(a,n)]);
	printf("\nPhan tu am lon nhat nam o vi tri A[%d],co gia tri = %d",TimVTAmMax(a,n),a[TimVTAmMax(a,n)]);
	return 0; 
}
  
