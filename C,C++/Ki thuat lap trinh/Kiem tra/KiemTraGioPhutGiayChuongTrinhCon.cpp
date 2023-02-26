
#include <stdio.h>
int KiemTra(int gio,int phut,int giay);
int main()
{
    int gio, phut, giay;
    printf("Gio  = ");
    scanf("%d", &gio);
    printf("Phut = ");
    scanf("%d", &phut);
    printf("Giay = ");
    scanf("%d", &giay);
	if (KiemTra(gio,phut,giay) == 1)
	printf("Hop le!\n");
	else 
	printf("Ko hop le!\n"); 
}
int KiemTra(int gio,int phut,int giay)
{
 if((gio>=1&&gio<24)&&(phut>=1&&phut<60)&&(giay>=1&&giay<60))
 return 1;
 else 
 return 0; 
} 
