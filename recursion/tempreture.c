#include<stdio.h>


//convert to temparature celcius to farenhait
float convertTemp(float cel);

int main(){
  float cel;
  printf("enter your temparature:");
  scanf ("%f",&cel);
  float far=convertTemp(cel);
  printf("tempature is:%f",far);
 


  return 0;
}

float convertTemp(float cel){

  float far=cel*(9.0/5.0)+32;

  return far;
}