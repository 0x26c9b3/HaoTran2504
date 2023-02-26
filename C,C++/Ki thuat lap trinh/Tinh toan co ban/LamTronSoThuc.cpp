//
//  LamTronSoThuc.cpp
//  GioiThieuC
//
//  Created by Trần Minh Thái on 24/11/2021.
//

#include<stdio.h>
int main()
{
    int y;
    float x;
    printf("Nhap vao 1 so thuc: ");
    scanf("%f", &x);

    y = (int)(x+0.5);
    printf("=>So lam tron = %d", y);
    return 0;
}

