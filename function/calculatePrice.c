#include<stdio.h>

void calculatePrice(float price);

int main(){
  float price;
  printf("Enter your Price:");
  scanf("%f",&price);
  printf("Actual Price:%f\n",price);
 
calculatePrice(price);
  return 0;
}

void calculatePrice(float price){
  float vat=0.15;
 

   price=price+(vat*price);
  printf("final price price:%f",price);
}