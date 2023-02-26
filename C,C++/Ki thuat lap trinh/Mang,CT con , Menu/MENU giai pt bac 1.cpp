#include"stdio.h"
#include"conio.h"
#include"math.h"

int GiaiPTBac1(float a, float b);
int GiaiPTBac2(int a, int b, int c);
int KiemTraTamGiac(int a, int b, int c);
int TinhSTamGiac(int a, int b, int c);
int TinhTienTaXi(float s);

//Giai Phuong Trinh Bac 1
int GiaiPtBac1(float a, float b)
{
	if (a==0)
	{
		if (b==0)
		{
			printf("Phuong trinh vo so nghiem\n\n");
		}
		else
		{
			printf("Phuong trinh vo nghiem\n\n");
		}
	}
	else
	{
		printf("Nghiem cua phuong trinh la x= %.2f \n\n", -b/a);
	}
}
//GIai Phuong Trinh Bac 2
int GiaiPtBac2(float a, float b, float c)
{	
	if(a==0)
	{
		if (b==0)
		{
			if(c==0)
			{
				printf("Phuong trinh vo so nghiem\n\n");
			}
			else
			{
				printf("Phuong trinh vo nghiem\n\n");
			}
		}
		else
		{
			printf("Phuong trinh co 1 nghiem: %d\n\n", -c/b);
		}
	}
	else
	{
		float delta=b*b-4*a*c;
		if (delta<0)
		{
			printf("Phuong trinh vo nghiem\n\n");
		}
		else
			if (delta==0)
			{
				printf("Phuong trinh co nghiem kep x1=x2= %.2f \n\n", -b/(2*a));
			}
			else
			{
				delta=sqrt(delta);
				printf("Phuong trinh co 2 nghiem x1= %f : x2= %.2f \n\n", (-b + delta) / (2*a), (-b - delta) / (2*a));
			}
	}
}
//Kiem Tra Tam Giac
int KiemTraTamGiac(int a, int b, int c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b))
		{
			printf("\nDu Lieu Ban Vua Nhap La Tam Giac Vuong \n\n");
		}
		else if((a==b && b==c))
		{
			printf("\nDu Lieu Ban Vua Nhap La Tam Giac Deu\n\n");
		}
		else if((a==b || a==c || b==c))
		{
			printf("\nDu Lieu Ban Vua Nhap La Tam Giac Can\n\n");
		}
		else
		{
			printf("\nDu Lieu Ban Vua Nhap La Tam Giac Thuong\n\n");
		}
	}
	else
		{
			printf("\nKhong Tao Thanh Tam Giac\n\n");
		}
}
//Tinh Dien Tich Tam Giac
int TinhSTamGiac(int a, int b, int c)
{
	float p;
		if(a+b>c&&a+c>b&&b+c>a)
		{
			p=(a+b+c)/2.0;
			printf("Dien Tich Tam Giac La : %.2f \n", sqrt(p*(p-a)*(p-b)*(p-c)));
		}
	return 0;
}
//Tinh Tien TaXi
int TinhTienTaXi(float s)
{
	float tt;
	do
	{
		printf("Nhap Vao So KM Ma Ban Da Di: ");
		scanf("%f", &s);
		if(s<0) printf("Nhap Sai Roi Nhap Lai Di Please !\n");
	}
	while(s<0);
	if (s<=10)
	{
		tt=s*5000;
	}
	else 
	
		if(s<=30)
			{
				tt=10*5000+(s-10)*10000;
			}
		else
			{
				tt=10*5000+20*10000+(s-30)*13000;
			}
	
	printf("So Tien Ma Ban Phai Tra La: %.2f", tt);
	return 0;
}

int main()
{
	int gt, y;
	float a, b;
	do
	{
		printf("\n =========== MENU ===========\n");
		printf("1. Giai Phuong Trinh Bac 1\n");
		printf("2. Giai Phuong Trinh Bac 2\n");
		printf("3. Kiem Tra Tam Giac Vuong Can Tron Deu\n");
		printf("4. Tinh Dien Tich Tam Giac\n");
		printf("5. Tinh Tien TaXi\n");
		printf("0. Ket Thuc Chuong Trinh\n");
		printf(" =========== EDN  ===========\n");
		printf("Nhap so tuong ung voi chuong trinh ma ban can lam: ");
		scanf("%d", &gt);
		if (gt>5||gt<0) 
		{
			printf("\nKhong co chuong trinh trong MENU voi so ban chon! Moi chon lai.\n\n");
		}		
		if (gt==0)
		{
			printf("\nThank You !");
		}
		if (gt==1)
		{
			printf("Nhap so a= ");
			scanf("%d", &a);
			printf("Nhap so b= ");
			scanf("%d", &b);
			GiaiPtBac1(a, b);
			
			printf("Ban co muon tiep tuc dung MENU khong ? (1 or 0) : ");
			scanf("%d", &y);
			switch(y)
			{
				case 1 : break;
				case 0 :printf("\nThank you !"); return 0;
			}
			
		}
		if (gt==2)
		{
			float a, b ,c;
			printf("Nhap vao 3 so a b c : ");
			scanf("%f%f%f", &a, &b, &c);
		
			GiaiPtBac2(a,b,c);
			
						
			printf("Ban co muon tiep tuc dung MENU khong ? (1 or 0) : ");
			scanf("%d", &y);
			switch(y)
			{
				case 1 : break;
				case 0 :printf("\nThank you !"); return 0;
			}
		
		}
		if(gt==3)
		{
			int a,b,c;
			printf("Nhap vao do dai ba canh a, b, c: ");
			scanf("%d%d%d", &a, &b , &c);
		
			KiemTraTamGiac( a,  b,  c);
			
						
			printf("Ban co muon tiep tuc dung MENU khong ? (1 or 0) : ");
			scanf("%d", &y);
			switch(y)
			{
				case 1 : break;
				case 0 :printf("\nThank you !"); return 0;
			}
		
		}
		if(gt==4)
		{
			int a, b, c;
			do
			{
				printf("Nhap Vao 3 Canh Cua Tam Giac: ");
				scanf("%d%d%d", &a, &b, &c);
				if(a+b>c&&a+c>b&&b+c>a)
				{
					TinhSTamGiac(a, b, c);
				}
				else
				{
					printf("Nhap Sai Do Dai Roi Kia Nhap Lai Di -.-\n");
				}
			}
			while(a+b<c||a+c<b||b+c<a);
			printf("Ban co muon tiep tuc dung MENU khong ? (1 or 0) : ");
			scanf("%d", &y);
			switch(y)
			{
				case 1 : break;
				case 0 :printf("\nThank you !"); return 0;
			}
		}
		if(gt==5)
		{
			float s, tt;
			 TinhTienTaXi(s);
		}
	}while(gt!=0);
	return 0;
}
