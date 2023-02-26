#include<stdio.h>
int KTNgay(int n)
{
	int ngay,thang,hople =0;
	while ((ngay>0)&& (ngay <32))
	{
			if(KTThang(n)==1)
			{
				(1<=ngay&&ngay<=30);
				bool = true;
				else
				bool = false;
				break;
			}
			if(KTThang(n)==2)
			{
				(1<=ngay&&ngay<=31);
				bool = true 
				else
				bool = false
				break;
			}
			if(KTThang(n)==3)
			{
				(1<=ngay&&ngay<=29);
				bool = true
				else
				bool = false
				break;
			}
			if(KTThang(n)==4)
			{
				(1<=ngay&&ngay<=28);
				bool = true 
				else
				bool = false
				break;
			}
			if (bool = true)
			{
			return = 1;
			else(bool = false)
			return = 0;
			}
	}
 } 
int KTThang(int n)
{
	int ngay,thang;
	while ((thang <12 )&&(thang>0))
	{
 		switch(thang)
    	{
        
			return 2;break;
        case 2:
        	if(KTcase 4:
        case 6:
        case 9:
        case 11:
            return 1;break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:Nam(n)==3)
        	return = 3;break;
        	else
        	return = 4;break;
		}	
	}
}
int KTNam(int n)
{
	int nam;
	while(nam > 0)
	{
	if(nm%400==0||(nm%4==0&&nm%100!=0))
	return 3; //nam nhuan
	else
	return 4;//nam ko nhuan
	}
}
int main()
{
	int ngay,thang,nam;
	if (KTNgay(n)==1)
	{
	printf("Ngay hop le! \n";)
	printf("Thang hop le\n";)
	printf("Nam hop le\n");

	}
	else 
	{
	printf("Ngay ko hop le\n");
	printf("Thang ko hop le\n");
	printf("Nam ko hop le\n");
	}
	return 0;
}
