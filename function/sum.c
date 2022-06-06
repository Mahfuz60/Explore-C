#include<stdio.h>
 int sum(int a,int b);

int main(){
  int a,b;
  printf("enter your first number:");
  scanf("%d",&a);
  printf("enter your second number:");
  scanf("%d",&b);
  int s=sum(a,b);
  printf("total sum:%d\n",s);

  return 0;
}

int sum(int a,int b){
  return a+b;
}