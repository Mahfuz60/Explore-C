#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter your number:");
  scanf("%d",&n);
  for(int i=n;i>=1;i--){
    sum=sum+i;

    //reverse number 
    printf("%d\n",i);

  }
  printf("total sum:%d\n",sum);
  return 0;
}