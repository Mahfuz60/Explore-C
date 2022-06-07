#include<stdio.h>
int main(){
  float price=105.00;
  float *ptr=&price;

  printf("ptr=%u \n",ptr);
  ptr++;
  printf("ptr is=%d \n",ptr);
   ptr--;
  printf("ptr=%d \n",ptr);

  return 0;

}