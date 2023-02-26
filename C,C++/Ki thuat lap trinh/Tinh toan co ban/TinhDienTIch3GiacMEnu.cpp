//=========================//
//Tran Chi Hao	//
//MSSV:2180607472//
//Lop:21DTHE1//
//========================//
#include <stdio.h>
#include <math.h>
#include<conio.h>
int phuongtrinh1(float a,float b);
int phuongtrinh2(float a, float b, float c);
int ktratamgiac(int a, int b, int c);
int tinhdientich(float a , float b , float c);
int taxi(float s,float money);
//===============================================================================================================================================
int tinhdientich(float a,float b,float c)
{
	float p,s;  
          if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) 
		  			{
                   printf("\nDay la ba canh cua tam giac");
                   p = (a+b+c)/2;
                   s = sqrt(p*(p-a)*(p-b)*(p-c));
                   printf("\nDien tich cua tam giac la %f", s); 
          			}
} 
//================================================================================================================================================
int  ktratamgiac(int a, int b , int c ){
    if( a<b+c && b<a+c && c<a+b ){
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            printf("Day la tam giac vuong");
        else if(a==b && b==c)
             printf("Day la tam giac deu");
        else if(a==b || a==c || b==c)
             printf("Day la tam giac can");
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
             printf("Day la tam giac tu");
        else
             printf("Day la tam giac nhon");
    }
    else
         printf("Ba canh a, b, c khong phai la ba canh cua mot tam giac");

}
//===================================================================================================================================================
int phuongtrinh1(float a, float b)
{
  if(a==0){      //n?u a==0 th?
   			 if(b==0){    //n?u b==0 th?
     				 printf("\nPhuong trinh vo so nghiem");
   					 }
					else
					{       //n?u không th? (n?u b!=0 th?)
      				printf("\nPhuong trinh vo nghiem");
    				}
  		}else
 			 {         //n?u không th? (n?u a!=0 th?)
    		  printf("\nPhuong trinh co nghiem x=%g",-b/a);
 			 }

}
//==================================================================================================================================================================================
int phuongtrinh2(float a, float b, float c) 
{
    if (a == 0)
	{ 
        if (b == 0)
			{
            printf("Phuong trinh vo nghiem!");
        	} 
		else{
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
       		}
    }
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    if (delta > 0) 
		{
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
    	} else if (delta == 0) 
				{
       				 x1 = (-b / (2 * a));
        			printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    			} else
					{
        				printf("Phuong trinh vo nghiem!");
    				}
	
}
//====================================================================================================================================================================================
int taxi  (float s)
{
		float money; 
		if (s > 0)
		{
		if ( s <= 10 )
		money = s * 5000; 
		else if ( s <= 30)
		money = 10*5000+(s-10)*10000; 
		else
		money = 10 *5000+20*10000+(s-30)*13000;
		printf("So tien ban phai tra la: %.1f ",money);
		}
		else 
		printf("Nhap sai roi!");
}
//====================================================================================================================================================================================
int main()
{
	float a,b; 
	int c,y; 
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
			scanf ("%d",&c);
		switch(c)
				{
				case 1: 
						{	
							int a,b; 
							printf("\nNhap so a= ");
							scanf("%d", &a);
							printf("\nNhap so b= ");
							scanf("%d", &b);
							phuongtrinh1(a,b);
							
							printf("\nBan co muon tiep tuc dung MENU khong ? (1 or 0) : ");
							scanf("%d", &y);
							if (y==1) 
								break;
							else 
								printf("\nThank you !"); return 0;
						}
				case 2: 
						{
							float a, b ,c;
							printf("\nNhap vao 3 so a b c : ");
							scanf("%f%f%f", &a, &b, &c);
							phuongtrinh2(a,b,c);
			
							printf("\nBan co muon tiep tuc dung MENU khong ? (1 or 0) : ");
							scanf("%d", &y);
							if (y==1) 
							break;
							else 
							printf("\nThank you !"); return 0;
						}
				case 3:
						{
							int a,b,c;
							printf("\nNhap vao do dai ba canh a, b, c: ");
							scanf("%d%d%d", &a, &b , &c);
							ktratamgiac(a,b,c);
			
							printf("\nBan co muon tiep tuc dung MENU khong ? (1 or 0) : ");
							scanf("%d", &y);
							if (y==1) 
							break;
							else 
							printf("\nThank you !");
							return 0;
						}
				case 4: 
						{
							int a, b, c;
							printf("\nNhap Vao 3 Canh Cua Tam Giac: ");
							scanf("%f%f%f", &a, &b, &c);
							tinhdientich(a, b, c);
			
							printf("\nBan co muon tiep tuc dung MENU khong ? (1 or 0) : ");
							scanf("%d", &y);
							if (y==1)
							break;
							else
							printf("\nThank you !");
							return 0;
						}
				case 5: 
						{
							int s,money; 
							printf("\nNhap so km S = ");
							scanf("%d",&s);
							taxi(s); 
			
							printf("\nBan co muon tiep tuc dung MENU khong ? (1 or 0) : ");
							scanf("%d", &y);
							if (y==1)
							break;
							else
							printf("\nThank you !");
						}
				}
	}while (c!=0);
}

	
	
