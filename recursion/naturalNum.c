#include<stdio.h>

int sum(int n);


//sum of natural number 1 to n
int main(){
  int n;
  printf("enter number:");
  scanf("%d",&n);
  printf("total sum:%d",sum(n));
  
  return 0;
}

//recursion function

int sum(int n){
  if(n==1){
    return 1;
  }

  int sumNt1=sum(n-1);//sum 1 to n
  int sumN=sumNt1+n;
 return sumN;
}


//sum 1 to n
//n=5
//sum(4)+5=>10+5=15
//sum(3)+4=>6+4=10
//sum(2)+3=>3+3=6
//sum(1)+2=>1+2=3
//sum(1)=>1
