#include<stdio.h>
bool primeCheck(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main(){
  int t;
  scanf("%d",&t);
  int number[6];
  for(int i = 0; i < t ; i ++){
    scanf("%d",&number[i]);
  }
  for(int i = 0; i < t ; i ++){
    if(primeCheck(number[i])) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}