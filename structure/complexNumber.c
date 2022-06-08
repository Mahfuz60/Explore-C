#include <stdio.h>

struct complex
{
  int real;
  int img;
};
int main()
{
  struct complex num1 = {5, 8};
  struct complex *ptr = &num1;
  // printf("real part:%d\n", (*ptr).real);
  // printf("img part:%d\n", (*ptr).img);

  // print to arrow oparetor

  printf("real part:%d\n", ptr->real);
  printf("imag part:%d", ptr->img);

  return 0;
}
