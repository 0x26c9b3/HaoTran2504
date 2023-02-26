//=====================================================================
//Ho va ten: Tran Chi Hao
//MSSV:  2180607472
//Lop: 21DTHE1
//De so:  2
//=====================================================================
#include<stdio.h>
int main()
{
  int i, n,t, dem = 1;
  int max = 1;
  do
  {
    printf("\nNhap vao so nguyen duong n: ");
    scanf("%d", &n);
  }while(n < 0 && printf("\nSo n phai lon hon hoac bang 0!!"));
  t=n;
  do
  {
    i = n % 10;
    if(i == max)
      dem ++;
    if(i > max)
      max = i;
  }while(n =n / 10);
  printf("\nChu so lon nhat trong %d: %d",t, max);
  printf("\nTrong so %d co %d chu so %d ",t,dem,max);
return 0;
}
