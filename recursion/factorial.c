#include<stdio.h>


//calculate the factorial n
int fact(int n);
int main(){
  int n;
  printf("enter the number:");
  scanf("%d",&n);

  printf("factorial n is:%d",fact(n));

  return 0;
}

//recursion function
int fact(int n){
  if(n==1){
    return 1;
  }
  int factNt1=fact(n-1);
  int factN=factNt1*n;
  return factN;
}