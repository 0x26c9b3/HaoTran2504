#include <stdio.h>

int main()
{
    int ng, th, nm, hople = 0;
    do 	
	{
    printf("Nhap vao ngay: ");
    scanf("%d", &ng);
    if (ng<1 || ng>31)
    printf("So ngay khong hop le");
	}while(ng<1 || ng>31);
	 do 	
	{
    printf("Nhap vao thang: ");
    scanf("%d", &th);
    if (th<1 || th>12)
    printf("So thang ko hop le");
	}while(th<1 || th>12);
 	 do 	
	{
    printf("Nhap vao nam: ");
    scanf("%d", &nm);
    if (nm<1)
    printf("So nam ko hop le");
	}while(nm<1);
    printf("Ngay %02d/%02d/%d ", ng, th, nm);
    switch (th)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (1 <= ng&&ng <= 31)
                hople = 1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (1 <= ng&&ng <= 30)
                hople = 1;
            break;
        case 2:
            if (nm % 400 == 0 || (nm % 4 == 0 && nm % 100 != 0))
            {
                if (1 <= ng&&ng <= 29)
                    hople = 1;
            }
            else //Nam khong nhuan
            {
                if (1 <= ng&&ng <= 28)
                    hople = 1;
            }
    }
    if (hople == 1)
        printf("hop le");
    else
        printf("khong hop le");

    return 0;
}
