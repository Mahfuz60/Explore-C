#include <stdio.h>

struct vector
{
  int x;
  int y;
};
void vectorSum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
  struct vector v1 = {5, 10};
  struct vector v2 = {4, 20};
  struct vector sum = {0};

  vectorSum(v1,v2,sum);

  return 0;
}

void vectorSum(struct vector v1, struct vector v2, struct vector sum)
{
  sum.x=v1.x+v2.x;
  sum.y=v1.y+v2.y;

  printf("sum of x:%d\n",sum.x);
  printf("sum of y:%d\n",sum.y);
}