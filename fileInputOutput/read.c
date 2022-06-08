#include <stdio.h>
int main()
{
  FILE *fptr;

  fptr = fopen("newText.txt", "r");
  // fptr=fopen("newText.txt","w");

  // if(fptr==NULL){
  //   printf("file doesnot exist!");
  // }else{
  //   fclose(fptr);
  // }

  char ch;
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fscanf(fptr, "%c", &ch);
  printf("%c\n", ch);
  fclose(fptr);

  return 0;
}