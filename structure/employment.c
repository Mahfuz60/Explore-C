#include <stdio.h>
#include <string.h>

struct employment
{
  char name[100];
  int job_id;
  int salary;
  int age;
  char officeName[100];
  char marriedStatus[100];
  char nationality[100];
};

int main()
{
  struct employment e1;
  e1.job_id = 1000150;
  e1.salary = 30000;
  e1.age = 28;
  strcpy(e1.name, "Mahfuz Alam");
  strcpy(e1.officeName, "kitsware Technology");
  strcpy(e1.nationality, "Bangladeshi");
  strcpy(e1.marriedStatus, "single");

  printf("job id:%d\n", e1.job_id);
  printf("name:%s\n", e1.name);
  printf("age:%d\n", e1.age);
  printf("nationality:%s\n", e1.nationality);
  printf("married status:%s\n", e1.marriedStatus);
  printf("office:%s\n", e1.officeName);
  printf("salary:%d\n", e1.salary);

  return 0;
}
