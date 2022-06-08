#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("enter your number:");
  scanf("%d", &n);
  ptr = (int *)calloc(n, sizeof(n));
  for (int i = 0; i < n; i++)
  {
    printf("%d \n", ptr[i]);
  }
  free(ptr);
  ptr = (int *)calloc(2, sizeof(n));
  for (int i = 0; i < 2; i++)
  {
    printf(" free memory:%d \n", ptr[i]);
  }

  return 0;
}