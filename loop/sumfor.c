#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter your number:");
  scanf("%d",&n);
  for (int i = 1; i<=n; i++)
  {
    sum=sum+i;
    // printf("%d \n",sum);
   
  }
   printf("total sum:%d\n",sum);

   
  
  return 0;
}