#include<stdio.h>
int main(){
  int age=22;
  int *ptr=&age;

  //address print
  // printf("%p \n",&age);   //0061FF18
  
  //convert to unsigned int to address
  // printf("%u \n",&age); //6422300

  //print pointer value
  // printf("%u \n",ptr); //6422300

//print pointer address value
// printf("%u\n",&ptr); //6422296


//print value
printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));

  return 0;
}