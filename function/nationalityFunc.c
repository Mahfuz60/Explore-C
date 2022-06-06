#include<stdio.h>

void bangaliFunc();
void indianFunc();
void franceFunc();

int main(){
  printf("Enter b for bangali and f for france and i for indain :");
  char ch;
  scanf("%c",&ch);
  if(ch =='b'){
    bangaliFunc();
  }
  else if(ch == 'i'){
    indianFunc();
  }
  else{
    franceFunc();
  }


  return 0;
}

void bangaliFunc(){
  printf("Aslamualaikum\n");
}

void indianFunc(){
  printf("Nameste \n");
}

void franceFunc(){
  printf("Bonjour \n");
}