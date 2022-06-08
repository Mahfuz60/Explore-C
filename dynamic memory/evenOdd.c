#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)calloc(5, sizeof(int));
  ptr[0] = 1;
  ptr[1] = 3;
  ptr[2] = 5;
  ptr[3] = 7;
  ptr[4] = 9;
  printf("odd Number:\n");
  for (int i = 0; i < 5; i++)
  {

    printf("%d \n", ptr[i]);
  }
  ptr = realloc(ptr, 7);
  ptr[0] = 2;
  ptr[1] = 4;
  ptr[2] = 6;
  ptr[3] = 8;
  ptr[4] = 10;
  ptr[5] = 12;
  ptr[6] = 14;
  printf("even Number:\n");
  for (int i = 0; i < 7; i++)
  {

    printf("%d \n", ptr[i]);
  }

  free(ptr);

  return 0;
}