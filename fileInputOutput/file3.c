#include<stdio.h>
int main(){
  FILE *fptr;

  fptr=fopen("file3.txt","r");
  char ch;
  ch=fgetc(fptr);
  while(ch!=EOF){
    printf("%c",ch);
    ch=fgetc(fptr);
  }
  printf("\n");



  fclose(fptr);


  return 0;
}