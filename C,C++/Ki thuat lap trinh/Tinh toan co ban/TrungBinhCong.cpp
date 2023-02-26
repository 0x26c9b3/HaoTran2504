
#include <stdio.h.>
int main()
{
	int a ,b,c;
	float tb;
	
	printf("Nhap a : ");
	scanf("%d",&a);
	
	printf("Nhap b : ");
	scanf("%d",&b);
	
	printf("Nhap c : ");
	scanf("%d",&c);
	
	tb = (float)(a+b+c)/3;
	printf("Trung binh cong : %.2f ", tb);
	
	return 0; 
	
	 
 } 
 /*
 #include <stdio.h>

int main()
{
    int a, b, c;
    float tb;
    
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);
    
    tb = (float)(a+b+c)/3;
    //tb = (a+b+c)/3.0f;
    printf("Gia tri trung binh = %.2f", tb);
    
    return 0;
}
*/
