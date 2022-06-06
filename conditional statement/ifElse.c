#include<stdio.h>
int main(){
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  if(age>=18){
    printf("You are Adult \n");
  }else{
    printf("You are Not Adult\n");
  }
  return 0;
}