#include<stdio.h>
int main(){

int n,r,sum=0,temp;
printf("Enter your number:");
scanf("%d",&n);
temp=n;
while(n>0){
  r=n%10;
  sum=sum+(r*r*r);
  temp=n%10;
}
if(sum==temp){
  printf("Armstrong Number\n");
}else{
  printf("Not a Armstrong Number\n");
}

  return 0;
}