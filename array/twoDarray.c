#include<stdio.h>
int main(){
//calculte two student 3 subject mark
  
  int marks[2][3];
  //1st student
  marks[0][0]=90;
  marks[0][1]=98;
  marks[0][2]=96;
//2nd student
  marks[1][0]=92;
  marks[1][1]=97;
  marks[1][2]=94;

  printf("%d \n",marks[0][2]);
  printf("%d \n",marks[1][2]);
  printf("%d \n",marks[0][0]);
  
  return 0;
}