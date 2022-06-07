#include<stdio.h>
int main(){
  int x=10;
  int *ptr=&x;
  int **pptr=&ptr;
  printf("**pptr=%d \n",**pptr);
  printf("**pptr of address=%d \n",&pptr);
  return 0;
}