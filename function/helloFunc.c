#include<stdio.h>

void helloFunc();
void goodByeFunc();

int main(){
helloFunc();
goodByeFunc();

  return 0;
}

void helloFunc(){
  printf("Hello world!\n");
}
void goodByeFunc(){

  printf("good bye!\n");
}