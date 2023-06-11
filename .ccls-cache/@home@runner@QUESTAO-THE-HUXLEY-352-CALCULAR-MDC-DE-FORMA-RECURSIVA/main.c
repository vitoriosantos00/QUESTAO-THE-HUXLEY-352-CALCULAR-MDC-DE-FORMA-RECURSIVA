#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int b);

int main() {
  int n1, n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  printf("%d",mdc(n1,n2));
  
return 0;
}

int mdc(int a, int b){
  int d;
  if((a%b)==0){
    return b;
  }else{
   return mdc(b,a%b);
  }
}