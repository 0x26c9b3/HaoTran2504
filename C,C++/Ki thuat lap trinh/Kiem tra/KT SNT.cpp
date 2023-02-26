bool laSoNguyenTo2(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2){
        return false;
    }       
     
    // Neu n = 2 la SNT
    if (n == 2){
        return true;
    }
     
    // Neu n la so chan thi ko phai la SNT
    if (n % 2 == 0){
        return false;   
    }
     
    // Lap qua cac so le
    for (int i = 3; i < (n - 1); i += 2){
        if (n % i == 0){
            return false;
        }   
    }
     
    return true;
}
