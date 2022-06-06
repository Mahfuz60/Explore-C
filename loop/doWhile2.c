#include<stdio.h>

//break to user input in odd number
int main(){
int n;
do{
  printf("Enter number:");
  scanf("%d",&n);
  printf("%d\n",n);

  if(n%2==1){
    break;
  }
}while(1);
printf("Thank you");

  return 0;
}
