bool SNT(int a){
    for(int i = 2 ; i <= sqrt(a);i++)
        if(a % i==0) return false;
    return true;
}