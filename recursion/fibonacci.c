#include<stdio.h>

int fibo(int n);

int main(){
  int n;
  printf("choose the number:");
  scanf("%d",&n);

  int result=fibo(n);
  printf("fibonacci number is:%d",result);
  return 0;
}

int fibo(int n){
  if(n==0){
    return 0;
  }else if(n==1){
    return 1;
  }
  int fiboN1=fibo(n-1);
  int fiboN2=fibo(n-2);
  int fiboN=fiboN1+fiboN2;
  // printf("fibo of %d is:%d\n",n,fiboN);
  return fiboN;
}

//fibo(6)
//fibo(5)+fibo(4)
//fibo()
