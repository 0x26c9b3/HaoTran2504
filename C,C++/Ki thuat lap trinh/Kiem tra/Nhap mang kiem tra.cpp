#include <stdio.h>
#define MAX 100
void NhapN(int *n) {
    do {
        printf("Nhap kich thuoc cua mang: ");
        scanf("%d", n);
        if (*n <= 0 || *n > MAX)
            printf("Nhap sai, moi nhap lai\n");
        else 
        break;
    } while (*n <= 0 || *n > MAX);
}
void NhapMang(int n, float a[]) 
{
    for(int i = 0;i < n;i++) 
	{
        printf("Nhap vao phan tu tai vi tri %d: ",i);
        scanf("%f", &a[i]);
    }
}
void XuatMang(int n, float a[]) 
{
	printf("Cac gia tri cua mang la:\n");
    for(int i = 0;i < n;i++) 
	{
        printf("%f\n", a[i]);
    }

}
int main() {
    int n;
    float a[MAX];
    NhapN(&n);
    NhapMang(n, a);
    XuatMang(n, a);
    return 0;
}
