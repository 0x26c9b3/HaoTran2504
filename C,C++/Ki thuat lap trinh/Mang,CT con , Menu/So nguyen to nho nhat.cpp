//=====================================================================
//Ho va ten: Tran Chi Hao
//MSSV:  2180607472
//Lop: 21DTHE1
//De so:  2
//=====================================================================
#include<stdio.h>
#include<math.h>
#define MAX 100

void NhapSoNguyen(int& sn,const char* str, int min, int max)
{
	do{
		printf("\n Moi nhap %s [%d...%d]:", str, min, max);
		scanf("%d", &sn);
		if(sn<min || sn>max) printf("Ban nhap sai....");
	}while(sn<min || sn>max);
}

//==============================================================
void NhapMang(int a[], int n)
{
	for (int i = 0;i<n ; i++){
		printf("Moi ban nhap A[%d] :", i);
		scanf("%d", &a[i]);
	}
}
//============================================================
void XuatMang(int a[], int n)
{
	
	for (int i = 0; i< n ; i++) 
	{
		printf("%5d", a[i]);
	}
}

//=============================================================
bool KiemTraNguyenTo(int n)
{
  //neu n < 2 thi khong phai la so nguyen to?
    if (n < 2)
    {
        return false;
    }
    //neu n > 2 thì ta tiep tuc xet
    else if (n > 2)
    {
      //neu n % 2 == 0 thì khong phai so nguyen to
        if (n % 2 == 0) 
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) 
        {
          //neu n chia het cho i thì khong phai la so nguyen to
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    //con lai la so nguyen to
    return true;
}
//=============================================================
int VtriSNTNhoNhat(int a[], int n)
{
	int vt,vtd,i;//vi tri , vi tri dau 
	for( i=0 ; i<n ; i++ )//duyet,tim vi tri so nguyen to dau tien  
		if(KiemTraNguyenTo(a[i])==true)
		{
			vtd=i;//gan vi tri dau = i 
			break;
		}
	if(i==n)//kiem tra tu i -> n ko co so nao la so nguyen to ca?
		return -1;
	vt=vtd;
	for( i=vt+1 ;i<n;i++ )//Neu tim duoc so nguyen to dau tien thi duyet tu vi tri snt ke tiep den het mang
		{
		if(KiemTraNguyenTo(a[i])==true && a[i]<a[vt])
			vt=i;
		}
	return vt;
}
//=============================================================
int main ()
{
	int n;
    int a[MAX];
  	NhapSoNguyen(n,"So Phan Tu", 1, 100);
    NhapMang(a,n);
    	printf("Mang ban vua nhap la:");
    XuatMang(a,n);
  	if(VtriSNTNhoNhat(a,n)==-1)
		printf("\nTrong mang khong co SNT ");
	else
		printf("\nVi tri SNT nho nhat trong mang la: A[%d]",VtriSNTNhoNhat(a,n));
    return 0;
}


