#include<stdio.h>
int main(){
  int marks;
  printf("Enter your Marks:");
  scanf("%d",&marks);
  if(marks>=80&&marks<100){
    printf("A+\n");
  }else if(marks>=70&& marks<79){
    printf("A\n");
  }else if(marks>=60&&marks<69){
    printf("A-\n");
  }else if(marks>=50&&marks<59){
    printf("B\n");
  }else if(marks>=40 && marks<49){
    printf("C");
  }else{
    printf("F\n");
  }
  return 0;
}