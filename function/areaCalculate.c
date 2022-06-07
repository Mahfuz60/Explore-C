#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangularArea(float a,float b);

int main(){
  float side,rad,a,b; 
  printf("Enter your side value:");
  scanf("%f",&side);
  printf("Enter your radius value:");
  scanf("%f",&rad);
  printf("enter your rectangular value a & b:");
  scanf("%f %f",&a,&b);

  squareArea(side);
  circleArea(rad);
  rectangularArea(a,b);



  return 0;
}

float squareArea(float side){
 
  float result= side*side;
  printf("square area is:%f \n",result);
}
float circleArea(float rad){
  float pi=3.1416;

  float result=pi*(rad*rad);
  printf("cicle area is:%f \n",result);
}

float rectangularArea(float a,float b){
  float result=a*b;
  printf("rectangular area is :%f\n",result);
}