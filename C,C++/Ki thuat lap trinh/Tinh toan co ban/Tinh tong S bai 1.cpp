//=====================================================================
//Ho va ten: Tran Chi Hao
//MSSV:  2180607472
//Lop: 21DTHE1
//De so:  2
//=====================================================================
#include<stdio.h>
int main()
{
  int i,n;
  float S;
  S = 0;
  do
  {
     printf("\nNhap n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++)
  {
    S = S + 1.0 / (i * (i + 1));
  }

  printf("\nTong 1/1x2 + 1/2x3 + ... + 1/%dx%d la: %.2f",n,(n+1), S);
return 0;
}
