#include <stdio.h>
int main(){
  int a, b;
  scanf("%d %d",&a ,&b);
  if(a != b){
     if(a == 1 && b==2 || a == 2 && b == 3 || a == 3 && b ==1){
        printf("1"); 
     }else
        printf("2");
  }else
  printf("0");
}
