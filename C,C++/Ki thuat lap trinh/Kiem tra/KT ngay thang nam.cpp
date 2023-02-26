//***********************//
//Ho va ten: Tran Chi Hao//
//MSSV:2180607472//
//Lop:21DTHE1//
//**********************//
#include <stdio.h>

int main()
{
    int ng, th, nm, hople = 0;
    do 	
	{
    printf("\nNhap vao ngay: ");
    scanf("%d", &ng);
    if (ng<1 || ng>31)
    printf("\nSo ngay khong hop le");
	}while(ng<1 || ng>31);
	 do 	
	{
    printf("\nNhap vao thang: ");
    scanf("%d", &th);
    if (th<1 || th>12)
    printf("\nSo thang ko hop le");
	}while(th<1 || th>12);
 	 do 	
	{
    printf("\nNhap vao nam: ");
    scanf("%d", &nm);
    if (nm<1)
    printf("\nSo nam ko hop le");
	}while(nm<1);
   printf("\nSo ngay %d/%d/%d",ng,th,nm);
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
        printf("\nhop le");
    else
        printf("\nkhong hop le");

    return 0;
}
