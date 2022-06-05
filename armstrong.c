#include<stdio.h>
int main(){

int n,m,sum=0,temp;
printf("Entem youm number:");
scanf("%d",&n);
temp=n;
while(n>0){
  m=n%10;
  sum=sum+(m*m*m);//153%10=15.3                                
   n=n/10;//153/10=15.3
}
if(sum==temp){
  printf("Armstrong Number\n");
}else{
  printf("Not a Armstrong Number\n");
}

  return 0;
}