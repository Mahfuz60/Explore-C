#include <stdio.h>
int main()
{
  FILE *fptr;

  fptr = fopen("hello.txt", "r");
  fclose(fptr);

  return 0;
}