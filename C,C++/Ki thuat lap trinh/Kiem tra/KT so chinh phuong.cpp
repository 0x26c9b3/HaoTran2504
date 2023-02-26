bool soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
