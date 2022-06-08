#include<stdio.h>
int main(){
  FILE *fptr;
  // fptr=fopen("newText.txt","w");
  fptr=fopen("newText.txt","a");
  fprintf(fptr,"%c",'A');
  fprintf(fptr,"%c",'M');
  fprintf(fptr,"%c",'A');
  fprintf(fptr,"%c",'D');
  fprintf(fptr,"%c",'E');
  fprintf(fptr,"%c\t",'R');
  fprintf(fptr,"%c",'D');
  fprintf(fptr,"%c",'E');
  fprintf(fptr,"%c",'S');
  fprintf(fptr,"%c",'H');
  fclose(fptr);


  return 0;
}