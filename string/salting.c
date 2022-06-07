#include <stdio.h>
#include <string.h>

void solting(char password[]);

int main()
{
  char password[100];
  scanf("%s", password);
  solting(password);
 

  return 0;
}

void solting(char password[])
{
  char salt[] = "1010";
  char newpass[200];
  strcpy(newpass, password); // newpass="test"
  strcat(newpass, salt);     // newpass="test"+"1010"
  puts(newpass);
}