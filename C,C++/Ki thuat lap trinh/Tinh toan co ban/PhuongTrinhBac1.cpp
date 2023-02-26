#include<stdio.h>

int main(){

  float a,b;
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){    
    if(b==0){   
      printf("\nPhuong trinh vo so nghiem");
    }else{      
      printf("\nPhuong trinh vo nghiem");
    }
  }else{         
    printf("\nPhuong trinh co nghiem x=%g",-b/a);
  }
  return 0;
}
