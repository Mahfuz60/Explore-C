#include <stdio.h>
int counterLength(char arr[]);

int main()
{
  char name[100];
  fgets(name, 100, stdin);
  printf("length is:%d", counterLength(name));

  return 0;
}

int counterLength(char arr[])
{
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++)
  {
    count++;
  }

  return count - 1;
}