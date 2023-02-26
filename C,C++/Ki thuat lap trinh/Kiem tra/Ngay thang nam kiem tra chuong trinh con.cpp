
#include <conio.h>
#include <stdio.h>
//===============================================================================================================================================================================
int main()
{
	int chon,lua; 
	do
	{ 
			printf("\n =========== MENU ===========\n");
			printf("1. Kiem tra thang \n"); 
			printf("2. Kiem tra nam\n");
			printf("3. Kiem tra ngay\n");
			printf("0. Ket Thuc Chuong Trinh\n");
			printf(" =========== END  ===========\n");
			printf("Nhap so tuong ung voi chuong trinh ma ban can lam: ");
			scanf ("%d",&chon);
			switch (chon)
					{
						case 1: 
							{   
								ktthang(&thang);
								
								printf("Ban co muon kiem tra tiep ko? Yes or No [1] or [0]");
								scanf("%d",&lua);
								if ( lua == 1)
								break;
								else
								printf("Good bye hen gap lai ^_^!");
								return 0;
							}
						case 2:
							{
								ktnam(&nam);
								
								printf("Ban co muon kiem tra tiep ko? Yes or No [1] or [0]");
								scanf("%d",&lua);
								if ( lua == 1)
								break;
								else
								printf("Good bye hen gap lai ^_^!");
								return 0;	
							}
						case 3:
							{
								ktngay(&ngay);
																
								printf("Ban co muon kiem tra tiep ko? Yes or No [1] or [0]");
								scanf("%d",&lua);
								if ( lua == 1)
								break;
								else
								printf("Good bye hen gap lai ^_^!");
								return 0;	
							}
					}
	}while ( chon!=0);
return 0;
}
//============================================================================================================================================================================
void ktnam(int *nam)
{
    int nam;
    if (nam > 0)
    {	
			if (((nam  % 4 == 0) && (nam % 100!= 0)) || (nam %400 == 0))
			{
			printf(" \nBan nhap dung roi! ");
			printf("\nNam ban vua nhap la nam nhuan");
			}
			else
			{
			printf(" \nBan nhap dung roi! ");
			printf("\nNam ban vua nhap ko phai la nam nhuan");
			}
	}
	else
	printf(" Nam ban nhap ko hop le!");
}
//==============================================================================================================================================================================
void ktngay(int *ngay)
{
	int ngay,thang,nam;
    printf("\nNhap ngay: ");
    scanf("%d",&ngay);
    printf("\nNhap nam: "):
    scanf("%d",&nam);
    printf("\nNhap thang");
    scanf("%d",&thang);
         switch (thang)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
              ngaymax=31;
              break;
            case 4:
            case 6:
            case 9:
            case 11:
               ngaymax=30;
               break;
        }
       	if ( thang = 2)
	{
    if ((ngay>1)&&(ngay<=ngaymax)
		{
		if (((nam  % 4 == 0) && (nam % 100!= 0)) || (nam %400 == 0))
					{		
					ngaymax=29;
					}
		else
					{
					ngaymax=28; 
					} 
		}
	}
    printf("So ngay ban nhap la hop le !");
    else 
	printf("So ngay ban nhap ko hop le!");
}
//========================================================================================================================================================
void ktthang(*thang)
{
    int thang;
    printf("\nNhap thang : ");
    scanf("%d",&thang);
 
        if ((thang>1 ) && (thang < 12))
        printf("So thang ban nhap la hop le ");
        else 
		printf("So ngay ban nhap ko hop le!") ;
}     

