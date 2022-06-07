#include<stdio.h>
int main(){
  int marks[3];
  printf("enter your  phy mark:"); 
  scanf("%d",&marks[0]);
  printf("enter your  math mark:"); 
  scanf("%d",&marks[1]);
  printf("enter your chem mark:"); 
  scanf("%d",&marks[2]);

  printf("phy mark=%d,math mark=%d,chem mark=%d \n",marks[0],marks[1],marks[2]);


  return 0;

}