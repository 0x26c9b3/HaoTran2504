//=========================//
//Tran Chi Hao	//
//MSSV:2180607472//
//Lop:21DTHE1//
//========================//
#include <stdio.h>
#include <math.h>
int main(){
	void phuongtrinh1(float a, float b);
	void phuongtrinh2 (float a, float b, float c);
	void tinhdientich(float a,float b,float c,float p,float s);
	void ktratamgiac(int a, int b , int c );
	bool thoat = false;
	int c; 
	do
	{ 
		printf("Moi chon chuong trinh!");
		printf("\n1. pt1\n2. pt2 \n3. dt 3 giac , \n4. xet 3 giac \n5. Thoat  ");
		printf("\nLua chon cua ban : ");
		scanf ("%d",&c);
	switch(c)
	{
		case 1: void phuongtrinh1(float a, float b); break;
		case 2: void phuongtrinh2 (float a, float b, float c);break;
		case 3: void tinhdientich(float a,float b,float c,float p,float s);break;
		case 4: void ktratamgiac(int a, int b , int c );break;
		case 5: thoat = true; break;
		default:
		printf("Lua chon cua ban ko hop le!"); 
	 } 
	}while(!thoat);	 
	return 0;
}
void tinhdientich(float a,float b,float c,float p,float s)
{
          printf("Nhap canh thu nhat: ");
          scanf("%f", &a);
          printf("Nhap canh thu hai: ");
          scanf("%f", &b);
          printf("Nhap canh thu ba: ");
          scanf("%f", &c);
          if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) 
		  			{
                   printf("\nDay la ba canh cua tam giac");
                   p = (a+b+c)/2;
                   s = sqrt(p*(p-a)*(p-b)*(p-c));
                   printf("\ndien tich cua tam giac la %f", s); 
          			}
			else
    		{printf("\nDay khong phai la ba canh cua tam giac");}
} 	
void ktratamgiac(int a, int b , int c ){
    printf("Nhap vao canh a: ");
    scanf("%d",&a);
    printf("Nhap vao canh b: ");
    scanf("%d",&b);
    printf("Nhap vao canh c: ");
    scanf("%d",&c);
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
void phuongtrinh1(float a, float b){
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){      //n?u a==0 th?
    if(b==0){    //n?u b==0 th?
      printf("\nPhuong trinh vo so nghiem");
    }else{       //n?u không th? (n?u b!=0 th?)
      printf("\nPhuong trinh vo nghiem");
    }
  }else{         //n?u không th? (n?u a!=0 th?)
    printf("\nPhuong trinh co nghiem x=%g",-b/a);
  }

}
void phuongtrinh2 (float a, float b, float c) {
    // kiem tra cac he so
    printf("Nhap he so bac 2, a = ");
    scanf("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf("%f", &c);
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

	
	
	
