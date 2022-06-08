#include <stdio.h>
#include <string.h>

struct address
{
  int house;
  int block;
  char city[100];
  char state[100];
};

void printAdds(struct address add);
int main()
{

  struct address adds[5];
  // input
  printf("enter your information:");
  scanf("%d", &adds[0].house);
  scanf("%d", &adds[0].block);
  scanf("%s", adds[0].city);
  scanf("%s", adds[0].state);

  printf("enter your information:");
  scanf("%d", &adds[1].house);
  scanf("%d", &adds[1].block);
  scanf("%s", adds[1].city);
  scanf("%s", adds[1].state);

  printf("enter your information:");
  scanf("%d", &adds[2].house);
  scanf("%d", &adds[2].block);
  scanf("%s", adds[2].city);
  scanf("%s", adds[2].state);

  printf("enter your information:");
  scanf("%d", &adds[3].house);
  scanf("%d", &adds[3].block);
  scanf("%s", adds[3].city);
  scanf("%s", adds[3].state);

  printf("enter your information:");
  scanf("%d", &adds[4].house);
  scanf("%d", &adds[4].block);
  scanf("%s", adds[4].city);
  scanf("%s", adds[4].state);

  printAdds(adds[0]);
  printAdds(adds[1]);
  printAdds(adds[2]);
  printAdds(adds[3]);
  printAdds(adds[4]);

  return 0;
}

void printAdds(struct address add)
{

  printf("address is:%d,%d,%s,%s \n", add.house, add.block, add.city, add.state);
}